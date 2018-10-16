#include <iostream>
using namespace std; 
int rev(int n, int temp) 
{ 
    if (n == 0) 
    return temp;  
    temp = (temp * 10) + (n % 10); 
    return rev(n / 10, temp); 
} 
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n, a, b=0;
        cin>>n;
        while(n>0)
        { 
            a=n%10;
            n=n/10;
            b=b+a;
        }
        int temp = rev(b, 0); 
        if (temp == b) 
        cout << "YES" << endl; 
        else
        cout << "NO" << endl; 
    }
    return 0;
} 