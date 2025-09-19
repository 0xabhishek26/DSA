#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.:";
    cin >>n;
    int pro=1,sum=0;
    while(n!=0)
    {
        pro*=(n%10);
        sum+=(n%10);
        n=n/10;
    }
    cout<<(pro-sum);
}
