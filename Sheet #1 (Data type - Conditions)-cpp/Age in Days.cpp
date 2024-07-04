#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int N,D,Year,Month,Days;
    cin>>N;
    Year=N/365;
    N=N%365;
    Month=N/30;
    Days=N%30;
    cout<<Year<<" years"<<endl;
    cout<<Month<<" months"<<endl;
    cout<<Days<<" days";
}
