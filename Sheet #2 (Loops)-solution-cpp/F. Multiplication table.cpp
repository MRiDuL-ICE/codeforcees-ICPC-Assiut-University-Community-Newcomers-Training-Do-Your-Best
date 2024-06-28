#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin>>N;
    for(int i=1; i<=12; i++)
    {
        M=N*i;
        cout<<N<<" * "<<i<<" = "<<M<<"\n";
    }
}


