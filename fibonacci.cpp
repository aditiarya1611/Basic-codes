#include<iostream>
using namespace std;
int main()
{
    int T,k;
    cin>>T;
    for(k=1;k<=T;k++)
    {
        int i=3;
        long long int n,first=1,second=1,next;
        cin>>n;
        if(n==1)
        {
            cout<<1;
            cout<<endl;
        }   
        else
        {
            cout<<first<<" "<<second<<" ";
            while(i<=n)
            {
                next=first+second;
                first=second;
                second=next;
                cout<<next<<" ";
                i++;
            }
            cout<<endl;
        }
    }
    return 0;
}