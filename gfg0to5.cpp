#include <iostream>
using namespace std;
int convert(int);
int main()
{
    int num;
    cin>>num;
    int convertednum=convert(num);
    cout<<convertednum<<endl;
    return 0;
}
int convert(int n)
{
    int place=1;
    int result=0;
    while(n>0)
    {
        if(n%10==0)
        {
            result= result+5*place;
            place=place*10;
        }
        else
        {
            result=result+(n%10)*place;
            place=place*10;
        }
        n=n/10;
    }
    return result;
}