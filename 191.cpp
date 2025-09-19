#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. ";
    cin>>n;
    int c=0;
    while(n>0)
    {
        if((n&1)!=0)
            c++;
        n=n>>1;
    }
     cout<< c;
}
