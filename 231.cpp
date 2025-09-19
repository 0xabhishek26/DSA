#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the no.:";
    int n;
    cin>>n;
    if (n==1)
    {
        cout<< "true";
        return 0;
    }
    if(n==0)
    {
        cout<< "false";
        return 0;
    }
    while(n%2==0)
    {
        n/=2;
        if(n==1)
        {
            cout<< "true";
            return 0;
        }
    }
    cout<< "false";
    return 0;

}