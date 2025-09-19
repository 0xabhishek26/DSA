#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"enter the no.";
    int x;
    cin>>x;
    int INT_MIN=-1 *pow(2,31);
    int INT_MAX=pow(2,31)-1;
    int r=0;
    while(x)
    {
        if(r<INT_MIN/10 ||r>INT_MAX/10)    //INT_MIN AND INT_MAX are the limits of integers  i.e.(-2^31 to 2^31-1)
            return 0;
        r*=10;
        r+=(x%10);
        x/=10;
    }
    cout<<r;
}