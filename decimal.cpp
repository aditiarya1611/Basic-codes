#include<iostream>
using namespace std;
int main()
{
    int i, T, num, rem, a=1, bin;
    cin>>T;
    for(i=0;i<=T;i++)
    {
        a=1;
        bin=0;
        cin>>num;
        while(num>0)
        {
            rem=num%2;
            bin=bin+rem*a;
            a=a*10;
            num=num/2;
        }
        cout<<bin<<endl;
    }
    return 0;
}