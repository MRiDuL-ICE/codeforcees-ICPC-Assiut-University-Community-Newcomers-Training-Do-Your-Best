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
    long long int A,B,K;
    cin>>A>>B>>K;
    if(A%K==0 && B%K==0){
        cout<<"Both";
    }
    else if(A%K==0 && B%K!=0){
        cout<<"Memo";
    }
    else if(A%K!=0 && B%K==0){
        cout<<"Momo";
    }
    else if(A%K!=0 && B%K!=0){
        cout<<"No One";
    }
}
