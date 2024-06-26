#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int N,even=0,odd=0,pos=0,neg=0;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        int X;
        cin>>X;
        if(X%2==0)
        {
            even++;
        }
        else if(X%2!=0)
        {
            odd++;
        }
        if(X>0)
        {
            pos++;
        }
        else if(X<0)
        {
            neg++;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}


