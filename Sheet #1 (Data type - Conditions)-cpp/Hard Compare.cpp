#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int A,B,C,D;
    double Num1,Num2;
    cin>>A>>B>>C>>D;
    Num1=B*log(A);
    Num2=D*log(C);
    if(Num1>Num2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

