#include<iostream>
using namespace std;
int main()
{
    int T,i,n,max;
    cin>>T;
    while(T)
    {
        cin>>n;
        int arr[n];
        max=1000;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<max)
            max=arr[i];
        }
        cout<<max<<endl;
        T--;
    }
    return 0;
}