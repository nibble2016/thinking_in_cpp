/*************************************************************************
	> File Name: 3.4.5_passaddress.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月11日 星期二 23时55分42秒
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
 * 可以通过向函数的参数传递某个元素的地址从而在函数内部
 * 改变实际参数的值。函数内部得到了外部对象在内存中的地址（指针），
 * 从而就可以改变外部对象。
 */
void f(int *p)
{
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	*p = 5;
	cout << "p = " << p << endl;
}

int main(int argc, char *argv[])
{
	int x = 47;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	f(&x);
	cout << "x = " << x << endl;

	return 0;
}
