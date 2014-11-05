/*************************************************************************
	> File Name: 2.7_intvector.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 22时00分48秒
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

//vector容器可以看成动态扩展的数组，push_back()函数将元素加入到vector的尾部
//size()函数返回vector容器的元素个数，并且vector重载了[]操作符，使得可以像数组
//一样访问vector中的元素
int main(int argc, char *argv[])
{
	vi v;
	for (int i = 0; i < 10; ++i) {
		v.pb(i);
	}
	for (int i = 0; i < sz(v); ++i) {
		cout << v[i] << ", ";
	}
	cout << endl;
	for (int i = 0; i < sz(v); ++i) {
		v[i] = v[i] * 10;		//赋值
	}
	for (int i = 0; i < sz(v); ++i) {
		cout << v[i] << ", ";
	}
	cout << endl;

	return 0;
}
