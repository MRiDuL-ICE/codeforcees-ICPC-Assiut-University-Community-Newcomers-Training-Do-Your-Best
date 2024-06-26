#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int N,even=0,odd=0,pos=0,neg=0;
    cin>>N;
    for(int X=1; X<=N; X++)
    {
        cin>>X;
        if(X%2==0)
        {
            even++;
        }
        else if(X%2!=0)
        {
            odd++;
        }
        int pos(int p_count)
        {
            p_count=0;
            if(X>0)
            {
                return p_count++;
            }
            cout<<"Positive: "<<pos(X)<<endl;
        }
        int neg(int n_count)
        {
            n_count=0;
            if(X<0)
            {
                return n_count++
            }
            cout<<"Negative: "<<neg(X)<<endl;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
}



