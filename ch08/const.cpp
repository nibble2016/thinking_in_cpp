/*************************************************************************
	> File Name: const.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月21日 星期三 11时20分11秒
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

struct Node {
	int a, b;
	Node(void) {}
	// 构造函数初始化列表
	Node(int x, int y): a(x), b(y) {}
};

int main(int argc, char *argv[])
{
	const int a = 10;
	int b[a] = {0};
	cout << sizeof(b) << endl;
	int f, h;
	cin >> f >> h;
	const int c = f + h;
	cout << c << endl;
	return 0;
}
