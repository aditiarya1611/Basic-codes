#include<iostream>
using namespace std;
int reverse(int num);
void reverse_dig(int &m, int &n);
void swap(int &x, int &y);

int reverse(int num)
{
    int rem1, reverse_digit1=0;
    while(num>0)
    {
        rem1=num%10;
        reverse_digit1=reverse_digit1*10+rem1;
        num/=10;
    }
    return reverse_digit1;
}

void reverse_dig(int &m, int &n)
{
    m=reverse(m);
    n=reverse(n);
}

void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a, b;
        cin>>a>>b;

        reverse_digit(a, b);
        swap(a, b);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}