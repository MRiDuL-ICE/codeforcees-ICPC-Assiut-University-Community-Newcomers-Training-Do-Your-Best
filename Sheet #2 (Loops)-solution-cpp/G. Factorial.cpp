#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long unsigned Fact(int n)
{
    if(n>0){
        return n*Fact(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int N,X;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>X;
        cout<<Fact(X)<<"\n";
    }
}

