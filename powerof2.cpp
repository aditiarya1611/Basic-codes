#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        long long int num;
        cin>>num;
        if(num>0)
        {
            while(num%2==0)
                num=num/2;
            if(num==1)
                cout<<"YES"<<endl;
        }
        if(num==0 || num!=1)
            cout<<"NO"<<endl;
    }
    return 0;
}