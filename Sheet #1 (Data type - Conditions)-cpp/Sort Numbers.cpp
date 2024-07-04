#include <iostream>#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
   int n[3],e[3];
   int len=sizeof(n)/sizeof(n[0]);
   for(int i=0;i<len;i++){
    cin>>n[i];
    for(int j=0;j<len;j++){
        e[i]=n[i];
    }
   }
    sort(n,n+len);
    for(int i=0;i<len;i++)
    cout<<n[i]<<endl;
    cout<<endl;
    for(int j=0;j<len;j++)
    cout<<e[j]<<endl;
}
