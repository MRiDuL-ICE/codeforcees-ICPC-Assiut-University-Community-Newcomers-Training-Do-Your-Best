#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int A,B;
    char S;
    cin>>A>>S>>B;
    switch(S){
    case'+':
        cout<<A+B;
        break;
    case '-':
        cout<<A-B;
        break;
    case'*':
        cout<<A*B;
        break;
    case'/':
        cout<<A/B;
        break;
    }
    return 0;
}
