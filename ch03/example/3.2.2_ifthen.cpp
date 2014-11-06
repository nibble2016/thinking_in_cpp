/*************************************************************************
	> File Name: 3.2.2_ifthen.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 22时51分58秒
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
 * Demonstration of if and if-else conditionals
 */
int main(int argc, char *argv[])
{
	int num;
	cout << "输入一个整数并回车：";
	cin >> num;
	if (num > 5) {
		cout << "这个数大于5" << endl;
	} else if (num < 5) {
		cout << "这个数小于5" << endl;
	} else {
		cout << "这个数等于5" << endl;
	}

	cout << "输入一个整数并回车：";
	cin >> num;
	if (num < 10) {
		if (num > 5) {
			cout << "5 < num < 10" << endl;
		} else {
			cout << "num <= 5" << endl;
		}
	} else {
		cout << "num >= 10" << endl;
	}

	return 0;
}
