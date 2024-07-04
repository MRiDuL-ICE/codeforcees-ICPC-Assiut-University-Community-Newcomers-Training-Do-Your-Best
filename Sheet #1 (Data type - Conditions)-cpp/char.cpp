#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if(islower(X)){
        X=X-32;
        cout<<X;
    }
    else if(isupper(X)){
        X=X+32;
        cout<<X;
    }

}
