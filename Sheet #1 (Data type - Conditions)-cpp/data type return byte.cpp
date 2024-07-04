#include <iostream>
using namespace std;

class Solution
{
public:
    int dataTypeSize(string str)
    {
        if(str=="Character")
        {
            return sizeof(char);
        }
        else if(str=="Long")
        {
            return sizeof(long);
        }
        else if(str=="Double")
        {
            return sizeof(double);
        }
        else if(str=="Integer")
        {
            return sizeof(int);
        }
        else if(str=="Float")
        {
            return sizeof(float);
        }
        else if(str=="Boolean")
        {
            return sizeof(bool);
        }
        else
        {
            return -1;

        }
    }
};

int main()
{
    Solution mySolution;
    string str;
    cin>>str;
    mySolution.dataTypeSize();
    return 0;
}
