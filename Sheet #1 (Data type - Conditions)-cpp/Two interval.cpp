#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
#include <algorithm>
#include <stdexcept>
#include <stdlib.h>
using namespace std;

int main()
{
    int start1,end1,start2,end2;
    //for input 1st interval
    cin>>start1>>end1>>start2>>end2;

    if(end1<start2 || end2<start1){
        cout<<"-1";
    }
    else{
        int intersectionStart=max(start1,start2);
        int intersectionEnd=min(end1,end2);
        cout<<intersectionStart<<" "<<intersectionEnd<<endl;
    }
}
