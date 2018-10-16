#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;	
	cin>>t;
	while(t--)
	{
	    string s;   
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<" ";
	    bool val=true;
	    while(val)
	    {
	        val=next_permutation(s.begin(),s.end());
	        if(val!=false)
	        cout<<s<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}