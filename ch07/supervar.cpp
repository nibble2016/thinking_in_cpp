/*************************************************************************
	> File Name: supervar.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月21日 星期三 00时20分46秒
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

class SuperVar
{
	// 枚举的类型名是可选的
	enum {
		character,
		integer,
		double_point
	} vartype;		// 匿名枚举
	// 使用匿名联合就像使用普通变量一样，不需要使用点操作符
	// 唯一的区别在于，该联合的两个变量占用同一块儿存储区
	union {
		char c;
		int i;
		double d;
	};			// 匿名联合
public:
	SuperVar(char ch) {c = ch; vartype = character;}
	SuperVar(int a) {i = a; vartype = integer;}
	SuperVar(double x) {d = x; vartype = double_point;}
	void print(void);
};

void SuperVar::print(void)
{
	switch (vartype) {
		case character:
			cout << "character: " << c << endl;
			break;
		case integer:
			cout << "integer: " << i << endl;
			break;
		case double_point:
			cout << "double_point: " << d << endl;
			break;
	}
}

// 如果匿名联合在文件作用域内（在所有函数和类之外），则它必须被声明为static
// 以使它有内部的连接
int main(int argc, char *argv[])
{
	SuperVar a('c'), b(12), c(1.2);
	a.print();
	b.print();
	c.print();

	return 0;
}
