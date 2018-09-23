#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long int n;
        int p;
        cin>>n;
        if((n%2)==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            p=0;
            while((n%2)==0)
            {
                p++;
                n=n/2;
            }
            cout<<p<<endl;
        }
    }
    return 0;
}