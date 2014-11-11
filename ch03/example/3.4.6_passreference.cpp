/*************************************************************************
	> File Name: 3.4.6_passreference.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月11日 星期二 23时59分55秒
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
 * c++提供了另一种修改外部对象的方式，就是参数的
 * 按引用传递（pass-by-reference）。我们可以用引用传递参数地址。
 */
void f(int &r)
{
	cout << "r = " << r << endl;
	cout << "&r = " << &r << endl;
	r = 5;
	cout << "r = " << r << endl;
}

int main(int argc, char *argv[])
{
	int x = 47;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	//这看起来像按值传递，实际上是按引用传递
	//这与使用指针的效果是一样的，不过引用更像是给
	//变量起了一个别名
	f(x);
	cout << "x = " << x << endl;

	return 0;
}
