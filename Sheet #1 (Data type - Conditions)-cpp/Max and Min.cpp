#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long int A,B,C;
    cin>>A>>B>>C;
    cout<<std::min({A,B,C})<<" "<<std::max({A,B,C});
}
