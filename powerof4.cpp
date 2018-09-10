#include<iostream>
using namespace std;
int isPowerOfFour(unsigned int);
int main()
{
    unsigned int T,i,n;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        if(isPowerOfFour(n))
        cout<<1<<endl;

        else
        cout<<0<<endl;
    }
    return 0;
}

int isPowerOfFour(unsigned int n)
{
    if(n>0)
    {
        while(n%4==0)
            n=n/4;
        if(n==1)
            return 1;
    }
        if(n==0 || n!=1)
            return 0;
}