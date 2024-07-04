#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <stdexcept>
#include <stdlib.h>
using namespace std;

int main(){
    double N;
    cin>>N;
    int I=ceil(N);
    if(I==N){
        cout<<"int "<<(int)N;
    }
    else{
        printf("float %d %.3f\n",(int)N,N-(int)N);
    }
}
