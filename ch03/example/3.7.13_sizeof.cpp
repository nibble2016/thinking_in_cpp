/*************************************************************************
	> File Name: 3.7.13_sizeof.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月09日 星期五 23时28分53秒
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
#include <string>
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
	// sizeof不是函数，是一个运算符，当作用于一个变量时，可以不要括号
	// 作用于类型时，必须要括号
	int i;
	cout << sizeof i << endl;
	cout << sizeof(int) << endl;
	return 0;
}
