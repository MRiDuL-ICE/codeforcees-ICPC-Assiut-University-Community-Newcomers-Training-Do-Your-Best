#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N<=1){
        cout<<"-1";
    }
    else{
        for(int i=1;i<=N;i++){
            if(i%2==0){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}

