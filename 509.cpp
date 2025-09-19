#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the no. :";
    int n,a=1,b=0;
    cin>>n;
    while (n)
    {
        n--;
        b+=a;
        a=b-a;
    }
    cout<<b;
}