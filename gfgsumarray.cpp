#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
    {
	    int n;
	    cin>>n;
	    vector<int> ar(n);
	    for(int i=0;i<n;i++)
        {
	        cin>>ar[i];
	    }
	    long long int sum=0;
	    for(int i=0;i<n-1;i++)
        {
	        for(int j=i+1;j<n;j++)
            {
	            if(abs(ar[j]-ar[i])>1)
                {
	                sum+=ar[j]-ar[i];
	            }
            }
        }
        cout<<sum<<"\n";
	}
	return 0;
}