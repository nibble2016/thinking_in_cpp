/*************************************************************************
	> File Name: 2.5_hellostrings.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时24分39秒
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

//string对象使用示例
int main(int argc, char *argv[])
{
	string s1, s2;				// Empty strings
	string s3 = "Hello, World.";		// Initialized
	string s4("I am");			// Also initialized
	s2 = "Today";				// Assigning to a string
	s1 = s3 + " " + s4;			// Combining strings
	s1 += " 8 ";				// Appending to a string
	cout << s1 + s2 + "!" << endl;

	return 0;
}
