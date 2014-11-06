/*************************************************************************
	> File Name: 2.2.1.1.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 20时07分59秒
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

//在c++中，空参数意味着不带参数的函数
int func()
{
	return 3;
}

int main(int argc, char *argv[])
{
	//报错
	//int a = func(1);
	//int b = func(2);
	int a = func();
	int b = func();
	cout << a << " " << b << endl;
	return 0;
}
