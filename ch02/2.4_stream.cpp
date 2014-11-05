/*************************************************************************
	> File Name: 2.4_stream.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 20时59分50秒
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

int main(int argc, char *argv[])
{
	// Specifying formats whit manipulators
	cout << "a number in decimal: " << dec << 15 << endl;
	cout << "in octal: " << oct << 15 << endl;
	cout << "in hex: " << hex << 15 << endl;
	//浮点数的格式由编译器自动确定
	cout << "a floating-poing number: " << 3.14159 << endl;
	//显式类型转换（case），任何字符都能转换成char类型
	cout << "non-printing char (escape): " << char(27) << endl;

	return 0;
}
