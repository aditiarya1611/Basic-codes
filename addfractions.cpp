#include<bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2, int den2);
int lcm(int, int);
int common(int, int);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);
    }
    return 0;
}
void addFraction(int num1, int den1, int num2, int den2)
{
    int resultNum, resultDen;
    if(den1==den2)
    {
        resultNum=num1+num2;
        resultDen=lcm(den1, den2);
        int k=common(resultNum, resultDen);
        int resultN=resultNum/k;
        int resultD=resultDen/k;
        cout<<resultN<<"/"<<resultD<<endl;
    }
    else
    {
        resultNum=num1*(lcm(den1, den2)/den1) + num2*(lcm(den1, den2)/den2);
        resultDen=lcm(den1, den2);
        int k=common(resultNum, resultDen);
        int resultN=resultNum/k;
        int resultD=resultDen/k;
        cout<<resultN<<"/"<<resultD<<endl;
    }
}
int lcm(int a, int b)
{
    int multiple;
    multiple=(a>b)?a:b;
    while(1)
    {
        if(multiple%a==0 && multiple%b==0)
        {
            return multiple;
            break;
        }
        ++multiple;
    }
}
int common(int c, int d)
{
    int i,gcd;
    for(i=1;i<=c && i<=d;i++)
    {
        if(c%i==0 && d%i==0)
        gcd=i;
    }
    return gcd;
}