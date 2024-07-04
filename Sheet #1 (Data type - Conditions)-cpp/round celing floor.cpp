#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    long long int A,B;
    float F,R,C;
    cin>>A>>B;
    R=round((float)A/B);
    F= floor((float)A/B);
    C=ceil((float)A/B);
    cout<<"floor "<<A<<" / "<<B<<" = "<<F<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<C<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<R;
}
