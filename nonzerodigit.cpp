#include<iostream>
#include<math.h>
using namespace std;
int fact[5]={0};
void factorial(int n)
{
    fact[0]=1;
    for(int i=1;i<=n;i++)
    {
        fact[i] = i*fact[i-1];
    }
}

int find_digit(int a,int b)
{
    if(a<5)
    return (pow(2,a)*fact[a]*fact[b]);
    
    int k1= a%4;
    if(k1!=0)
    k1 = pow(2,k1);
    else
    k1=6;
    
    int k2 = find_digit((a/5),(a%5));
    k2 = k2*k1*fact[b];
    k2=k2%10;
    
    return k2;
}

int main() 
{
	int t;
	cin>>t;
	factorial(5);
	while(t--)
	{
	    int  n;
	    cin>>n;
	    int a= n/5;
	    int b= n%5;
	    int k = find_digit(a,b);
	    k=k%10;
	    cout<<k<<endl;
	}
	return 0;
}