#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
void solution2()
{

	string num;
	cin >> num;
	int num1 = num[0] - '0';
	int num2 = num[1] - '0';
	if (num2 % num1 == 0 || num1 % num2 == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
int main()
{
	solution2();
}
