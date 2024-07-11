#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int counter;
    cin>>counter;
    for(int i=1;i<=counter;i++){
        string N;
        cin>>N;
        int size=N.size();
        for(int j=size-1;j>=0;j--){
            cout<<N[j]<<" ";
        }
        cout<<"\n";
    }
}
