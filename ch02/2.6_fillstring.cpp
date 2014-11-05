/*************************************************************************
	> File Name: 2.6_fillstring.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时32分55秒
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
#include <fstream>		// 文件读写
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

//string具有动态性，不必担心string的内存分配
//string会自动扩展以保存新的输入
int main(int argc, char *argv[])
{
	ifstream in("2.6_fillstring.cpp");
	string s, line;
	while (getline(in, line)) {
		s += line + "\n";
	}
	cout << s << endl;

	return 0;
}
