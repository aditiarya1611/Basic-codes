#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        cout<<num(a,n,k)<<endl;
    }
    return 0;
}

int num(int a[], int n, int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            if(a[i]%10==k)
            count++;
            a[i]=a[i]/10;
        }
    }
    return count;
}