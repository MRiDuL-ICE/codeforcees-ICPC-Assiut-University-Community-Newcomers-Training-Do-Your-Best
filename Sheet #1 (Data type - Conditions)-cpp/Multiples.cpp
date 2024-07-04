#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    long long int A,B;
    cin>>A>>B;
    if(B%A==0 || A%B==0){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
    return 0;
}
