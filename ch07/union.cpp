/*************************************************************************
	> File Name: union.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月21日 星期三 00时10分47秒
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

union U {
private:
	int i;
	double d;
public:
	U(int a)
	{
		i = a;
	}
	U(double a)
	{
		d = a;
	}
	int read_int();
	double read_double();
};

int U::read_int(void)
{
	return i;
}

double U::read_double(void)
{
	return d;
}

// 一个union也可以带有构造函数，析构函数，成员函数，甚至访问控制符
// 但是union不能在继承时作为基类使用。
// 它和class的不同就在于存储数据的方式
int main(int argc, char *argv[])
{
	U a(1), b(1.0);
	printf("%d %f\n", a.read_int(), b.read_double());

	return 0;
}
