#include<iostream>
using namespace std;
int main()
{
    int i,T,n,m;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        m=((2*n*n)+1)*n;
        cout<<m<<endl;
    }
    return 0;
}