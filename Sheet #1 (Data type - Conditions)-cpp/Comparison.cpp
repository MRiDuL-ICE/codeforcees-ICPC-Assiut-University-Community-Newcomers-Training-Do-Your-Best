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
    int A,B;
    char S;
    cin>>A>>S>>B;
    switch(S)
    {
    case'<':
        if(A<B)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
        break;
    case'>':
        if(A>B)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
        break;
    case'=':
        if(A==B)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
        break;
    }
}
