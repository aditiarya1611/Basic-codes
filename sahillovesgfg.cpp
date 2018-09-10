#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    int count=0;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if((i<s.size()-2) &&s[i]=='g'&& s[i+1]== 'f'&& s[i+2]== 'g')
	        {
	            count++;
	        }
	    }
	    if(count)
	    cout<<count<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}