#include<iostream>
using namespace std;
int reversedigit(int n, int temp)
{ 
    if(n == 0)
    return temp;
    temp=(temp*10)+(n%10);
    return reversedigit(n/10, temp);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int num;
        cin>>num;
        cout<<reversedigit(num, 0)<<"\n";
    }
    return 0;
}