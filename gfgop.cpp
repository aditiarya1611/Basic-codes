#include<iostream>
using namespace std;
int main()
{
    int i,T,a,b;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<a<<" is greater than "<<b;
        }
        else if(a<b)
        {
            cout<<a<<" is less than "<<b;
        }
        else
        {
            cout<<a<<" is equals to "<<b;
        }
    }
    return 0;
}