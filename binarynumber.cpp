#include<iostream>
using namespace std;
void printbinary(long long int n)
{
    long long int a=1,bin=0;
    long long int rem;
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*a;
        a=a*10;
        n=n/2;
    }
    cout<<bin;
}

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        long long int i,num;
        cin>>num;
        for(i=1;i<=num;i++)
        {
            printbinary(i);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}