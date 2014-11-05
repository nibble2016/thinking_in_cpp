/*************************************************************************
	> File Name: 2.2.1.4_declare.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 20时23分48秒
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

//extern关键字对于变量来说表明只声明，而不定义（分配存储空间）
//而对于函数来说，则是多余的，可选的
// Declaration & definition examples
extern int i;		// Declaration without definition
extern float f(float);	// Function declaration
float b;		// Declaration & definition

float f(float a)	// Definition
{
	return a + 1.0f;
}

int i;			// Definition
int h(int x)		// Declaration & definition
{
	return x + 1;
}

int main(int argc, char *argv[])
{
	b = 1.0;
	i = 2;
	f(b);
	h(i);

	return 0;
}
