#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int N,m;
    cin>>N;
    m=0;
    for(int i=1; i<=N; i++)
    {
        int X;
        cin>>X;
        m=std::max(m,X);
    }
    cout<<m<<"\n";
}


