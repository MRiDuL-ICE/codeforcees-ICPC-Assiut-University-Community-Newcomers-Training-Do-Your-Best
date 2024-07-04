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
    long long int A,B,C,D;
    cin>>A>>B>>C>>D;
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    int last2Digit=(A*B*C*D)%100;
    if(last2Digit<10){
    cout<<0;
    }
    cout<<last2Digit<<endl;
}
