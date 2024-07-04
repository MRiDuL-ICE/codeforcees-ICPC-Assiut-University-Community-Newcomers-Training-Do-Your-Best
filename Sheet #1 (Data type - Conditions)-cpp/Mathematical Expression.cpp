#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <stdexcept>
#include <stdlib.h>
using namespace std;

int main()
{
    int A,B,C,M;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;;
    switch(S)
    {
    case'+':
        M=A+B;
        if(M==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<M;
        }
        break;
    case'-':
        M=A-B;
        if(M==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<M;
        }
        break;
    case'*':
        M=A*B;
        if(M==C)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<M;
        }
        break;
    }
}
