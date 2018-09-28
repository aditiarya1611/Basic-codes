#include<bits/stdc++.h>
using namespace std;
/*You are required to complete this function */
int remove_duplicate(int [],int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}

int remove_duplicate(int A[],int N)
{
    for(int i=0;i<N;i++)
    {   
        for(int j=i+1;j<N;)
        {
            if(A[i]==A[j])
            {
                for(int k=j;k<N;k++)
                {
                    A[k]=A[k+1];
                }
                N--;
            }
            else
            j++;
        }
    }
    for(int i=0;i<N;i++)
    {
      cout<<A[i]<<" ";
    }
    return 0;
}
