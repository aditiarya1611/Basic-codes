#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x, l, u, count=0;
        cin>>x>>l>>u;
        for(int i=l+1;i<u;i++)
        {
            int d=i;
            while(d)
            {
                if((d%10)==x)
                count++;
                d=d/10;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}