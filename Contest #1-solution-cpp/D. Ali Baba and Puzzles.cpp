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
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b-c==d){
        cout<<"YES";
    }
    else if(a+b*c==d){
        cout<<"YES";
    }
    else if(a-b*c==d){
        cout<<"YES";
    }
    else if(a-b+c==d){
        cout<<"YES";
    }
    else if(a*b+c==d){
        cout<<"YES";
    }
    else if(a*b-c==d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
