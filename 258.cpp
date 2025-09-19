#include<iostream>
using namespace std;
int main()
{
    int num,d;
    cout<<"enter the no.";
    cin>>num;
    while(num>=10)
    {
        d=0;
        while(num!=0)
        {
            d+=num%10;
            num/=10;
        }
        num=d;
    }
    cout<<"sum is :" <<num;
    return 0;
}