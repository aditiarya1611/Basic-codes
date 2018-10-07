#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    int a=0;
	    cin>>n;
	    while(n>1)
	    {
	        n=n/2;
	        a++;
	    }
	    m=pow(2,a);
	    cout<<m<<endl;
	}
	return 0;
}