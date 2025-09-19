#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the no.";
    int n;
    cin>>n;
    if(n==0)
        return 1;
    int r=0,i=1;
    while(n)
    {
        if((n&1)==0)
            r+=i;
        n>>=1;
        i*=2;
    }
    cout<<r;
}