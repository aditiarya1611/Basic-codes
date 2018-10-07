#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int Arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>Arr[i];
	    }
	    for(int i=0;i<n/2;i++)
	    {
	        cout<<Arr[i]<<" "<<Arr[n/2+i]<<" ";
	    }
	    if(n%2!=0)
	    cout<<Arr[n-1];
	    cout<<endl;
	}
	return 0;
}