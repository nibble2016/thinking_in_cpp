/*************************************************************************
	> File Name: 10_1.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年10月08日 星期四 12时10分33秒
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
typedef pair<int, int> pii;
typedef long long ll;

const double esp = 1e-5;

#define N 10100

int arrays[N] = {1, 2, 3, 4, 5, -1};

int next(int idx = 0)
{
	static int *val;
	if (idx == 0) {
		val = arrays;
	} else {
		int ret = *val;
		if (ret != -1) {
			++val;
		}
		return ret;
	}
	return 0;
}

int fib(bool flag = false)
{
	static int a = 0;
	static int b = 1;
	if (flag) {
		a = 0;
		b = 1;
		return -1;
	}
	int c = b;
	int d = a + b;
	a = c;
	b = d;
	return a;
}

class StaticArray {
	const static int size = 1000;
};

int main(int argc, char *argv[])
{
	/*int a = 0;
	next();
	while ((a = next(1)) > 0) {
		cout << a << endl;
	}*/

	/*cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	fib(true);
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;
	cout << fib() << endl;*/
	return 0;
}
