#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;


int firstDigit(int X)
{

    while (X >= 10)
        X /= 10;

    return X;
}
int main()
{
    long long int X;
    cin>>X;
    if(firstDigit(X)%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
    }
