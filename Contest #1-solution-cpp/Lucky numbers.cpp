#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int N1=N/10;
    int N2=N%10;
    if(N1%N2==0 || N2%N1==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
