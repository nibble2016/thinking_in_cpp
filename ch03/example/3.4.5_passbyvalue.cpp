/*************************************************************************
	> File Name: 3.4.5_passbyvalue.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月11日 星期二 23时52分00秒
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

/*
 * 通常在函数的参数传递时，在函数内部生成一个该参数的拷贝，这称为
 * 按值传递（pass-by-value）。
 * 在函数内改变参数的值并不会影响函数的实际参数的值，它们存在于不同
 * 的空间。
 */
void f(int a)
{
	cout << "a = " << a << endl;
	a = 5;
	cout << "a = " << a << endl;
}

int main(int argc, char *argv[])
{
	int x = 47;
	cout << "x = " << x << endl;
	f(x);
	cout << "x = " << x << endl;

	return 0;
}
