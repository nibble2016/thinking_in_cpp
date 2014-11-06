/*************************************************************************
	> File Name: 3.2.9_catsinhats.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时29分32秒
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
 * Simple demonstration of recursion
 * c和c++都支持递归调用，也就是说一个函数可以直接或间接的调用自己。
 */
void remove_hat(char cat)
{
	for (char c = 'A'; c < cat; ++c) {
		cout << " ";
	}
	if (cat <= 'Z') {
		cout << "cat: " << cat << endl;
		remove_hat(cat + 1);		//Recursive call
	} else {
		cout << "VOOM!!!" << endl;
	}
}

int main(int argc, char *argv[])
{
	remove_hat('A');

	return 0;
}
