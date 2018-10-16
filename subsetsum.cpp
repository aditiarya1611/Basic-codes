#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt[2000]={0}, k=0;
void subsequence(int a[],int b[],int i,int j,int n)
{
    if(i==n)
    {
        for(int x=0;x<j;x++)
        {
            cnt[k]=cnt[k]+b[x];
        }
        k++;
        return;
    }
    b[j]=a[i];
    subsequence(a,b,i+1,j+1,n);
    subsequence(a,b,i+1,j,n);
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[100],b[100];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        subsequence(arr,b,0,0,n);
        sort(cnt,cnt+k);
        for(int i=0;i<k;i++)
        {
            cout<<cnt[i]<<" ";
            cnt[i]=0;
        }
        k=0;
        t--;
        cout<<endl;
    }
return 0;
}
