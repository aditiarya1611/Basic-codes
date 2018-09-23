#include<iostream>
using namespace std;
int isTriangle(int, int, int);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i,j,k,a;
        int sum=0, result=0, value=0;
        cin>>n;
        int arr[n];
        for(a=0;a<n;a++)
        cin>>arr[a];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    value=isTriangle(arr[i], arr[j], arr[k]);
                    if(value==1)
                    sum=arr[i]+arr[j]+arr[k];
                    if(result<sum)
                    result=sum;
                }
            }
        }
        if(value == 0 && result == 0)
            cout<<"-1"<<endl;
        else
            cout<<result<<endl;
    }
    return 0;
}

int isTriangle(int a, int b, int c)
{
    if((a+b > c) && (b+c > a) && (c+a >b))
    return 1;

    return 0;
}