#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //code
    int i,T,n,a,b,val;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>n;
        a=pow(n,2);
        b=a*2;
        val=b+n;
        cout<<val<<endl;
    }
    return 0;
}