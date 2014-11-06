/*************************************************************************
	> File Name: 2.6_scopy.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时28分26秒
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

// Copy one file to another, a line at a time
int main(int argc, char *argv[])
{
	ifstream in("2.6_scopy.cpp");		// Open for reading
	ofstream out("2.6_scopy.cpp~");		// Open for writing 

	string s;
	while (getline(in, s)) {		// Discards newline char
		out << s << "\n";		// ... must add it back
	}

	return 0;
}
