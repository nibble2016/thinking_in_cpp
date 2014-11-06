/*************************************************************************
	> File Name: 2.2.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 19时59分36秒
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
 * 编写一个程序，让它根据输入的半径计算出圆的面积，并打印。
 */
int main(int argc, char *argv[])
{
	double pi = acos(-1.0);
	double radius;
	cout << "输入圆的半径：";
	cin >> radius;
	cout << "圆的面积是：" << radius * radius * pi << endl;

	return 0;
}
