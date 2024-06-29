#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool checkPrime(int n)
{
    bool isPrime=true;
    if(n==1 || n==0)
    {
        return isPrime=false;
    }
    for(int i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            return isPrime=false;
            break;

        }
    }
    return isPrime;
}

int main()
{
    int n,temp;
    cin>>n;
    if(checkPrime(n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

