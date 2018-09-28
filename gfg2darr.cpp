#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,j,i;
	    cin>>n;
		int a[n][n];
	    for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			    cin>>a[i][j];
		    }
        }
	    for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			    cout<<a[j][i]<<" ";
		    }
	    }
		cout<<endl;
    }
    return 0;
}