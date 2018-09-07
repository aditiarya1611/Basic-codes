#include<iostream>
#include<math.h>
using namespace std;
long long int floorSqrt(long long int);
long long int floorSqrt(long long int x)
{
    double result;
    result=sqrt(x);
    return result;
}

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        int num;
        cin>>num;
        cout<<floorSqrt(num)<<endl;
    }
    return 0;
}