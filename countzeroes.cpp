#include<iostream>
using namespace std;
#define MAX 1000
int countZeroes(int A[MAX][MAX], int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int A[MAX][MAX];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<countZeroes(A,n)<<endl;
    }
    return 0;
}

int countZeroes(int A[MAX][MAX], int N)
{
    int count=0;
    for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(A[i][j]==0)
                count++;
            }
        }
        return count;
}