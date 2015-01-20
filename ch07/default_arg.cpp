/*************************************************************************
	> File Name: default_arg.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月21日 星期三 00时32分22秒
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

int add(int a, int b, int c = 0);

int main(int argc, char *argv[])
{
	printf("%d\n", add(1, 2));
	printf("%d\n", add(1, 2, 33));

	return 0;
}

// 默认参数只有在声明的时候才用加上
// 当既是定义又是声明时，就可以加上
//int add(int a, int b, int c = 0)
int add(int a, int b, int c)
{
	return a + b + c;
}

