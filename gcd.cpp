#include<iostream>
using namespace std;
int main()
{
    int T,j,a,b,i,gcd;
    cin>>T;
    for(j=0;j<=T;j++)
    {
    cin>>a>>b;

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    cout<<gcd<<endl;
    }
    return 0;
}