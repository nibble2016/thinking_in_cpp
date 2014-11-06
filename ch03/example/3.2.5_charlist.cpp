/*************************************************************************
	> File Name: 3.2.5_charlist.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时01分59秒
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
 * Display all the ASCII characters
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < 128; ++i) {
		if (i != 26) {			//ANSI Terminal clear screen
			cout << "value: " << i << " character: "
				<< char(i)	//Type conversion
				<< endl;
		}
	}

	return 0;
}
