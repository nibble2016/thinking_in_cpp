/*************************************************************************
	> File Name: 3.1.1_return.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 22时29分04秒
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
 * c++函数原型必须指明函数的返回值类型，而在c中，如果省略返回值，表示默
 * 认为整型。如果指明了返回值，但是函数中并没有返回，那么编译器产生一个警告，
 * 并且返回值是不确定值的。返回语句返回的值类型必须与函数指定的返回类型一致。
 */

char cfunc(int i)
{
	if (i == 0) {
		return 'a';
	}
	if (i == 1) {
		return 'g';
	}
	if (i == 5) {
		return 'z';
	}
	return 'c';
}

int main(int argc, char *argv[])
{
	int val;
	cout << "输入一个整数：";
	cin >> val;
	cout << cfunc(val) << endl;

	return 0;
}
