#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if(isdigit(X)){
        cout<<"IS DIGIT";
    }
    else if(isalpha(X)){
        cout<<"ALPHA"<<endl;
        if(isupper(X)){
            cout<<"IS CAPITAL";
        }
        else{
            cout<<"IS SMALL";
        }
    }

}

