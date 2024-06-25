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
    double X,P,M,D,O;
    cin>>X>>P;
    D=X/100;
    M=1-D;
    O=P/M;
    cout<<setprecision(2)<<fixed<<O;
}
