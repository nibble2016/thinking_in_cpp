/*************************************************************************
	> File Name: 2.7_fillvector.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时54分03秒
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
#include <fstream>		//文件读写
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

// Copy an entire file into a vector of string
int main(int argc, char *argv[])
{
	vector<string> v;
	ifstream in("2.7_fillvector.cpp");
	string line;
	while (getline(in, line)) {
		v.pb(line);
	}
	for (int i = 0; i < sz(v); ++i) {
		cout << i << ": " << v[i] << endl;
	}

	return 0;
}
