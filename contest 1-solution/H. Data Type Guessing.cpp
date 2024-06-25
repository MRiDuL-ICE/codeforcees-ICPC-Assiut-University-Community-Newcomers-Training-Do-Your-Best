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
    double n,k,a;
    cin>>n>>k>>a;
    double b=(n*k)/a;
    if(b=='int'){
         cout<<"int";
    }
    else if(b=='double'){
        cout<<"double";
    }
    else if(b=='long long'){
        cout<<"long long";
    }

}

