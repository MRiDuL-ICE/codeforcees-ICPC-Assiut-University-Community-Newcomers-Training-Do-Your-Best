#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string N)
{
    string P=N;
    int i=0;
    reverse(P.begin(),P.end());
    if(N==P)
    {
        cout<<P.erase(0,N)<<"\n";
        cout<<"YES";
    }
    else
    {
        cout<<P.erase(0,N)<<"\n";
        cout<<"NO";
    }
}

int main()
{
    string N;
    cin>>N;
    cout<<isPalindrome(N);
}
