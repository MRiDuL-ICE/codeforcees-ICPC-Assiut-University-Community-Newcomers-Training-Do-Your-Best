#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int temp=0,A,B;
    cin>>A>>B;
    temp=min({A,B});
    while(temp){
        if(A%temp==0 && B%temp==0){
            break;
        }
        temp--;
    }
            cout<<temp;
}

