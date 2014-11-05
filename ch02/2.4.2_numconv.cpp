/*************************************************************************
	> File Name: 2.4.2_numconv.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时14分26秒
 ************************************************************************/

#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

#define INF (INT_MAX / 10)
#define clr(arr, val) memset(arr, val, sizeof(arr))
#define pb push_back
#define sz(a) ((int)(a).size())

using namespace std;
typedef set<int> si;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef long long ll;

const double esp = 1e-5;

// Converts decimal to octal and hex
int main(int argc, char *argv[])
{
	int number;
	cout << "Enter a decimal number: ";
	cin >> number;
	cout << "value in octal = 0" << oct << number << endl;
	cout << "value in hex = 0x" << hex << number << endl;

	return 0;
}
