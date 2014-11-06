/*************************************************************************
	> File Name: 3.2.8_gotokeyword.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时22分31秒
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
 * The infamous goto is supported in c++
 */
int main(int argc, char *argv[])
{
	int val = 0;
	for (int i = 1; i < 1000; ++i) {
		for (int j = 1; j < 100; j += 10) {
			val = i * j;
			if (val > 47000) {
				goto bottom;
				//Break would only go to the outer 'for'
			}
		}
	}
bottom:			//A label
	cout << val << endl;


	return 0;
}
