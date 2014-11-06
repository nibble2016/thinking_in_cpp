/*************************************************************************
	> File Name: 2.7.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 20时14分00秒
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

/*
 * 编写一个程序，依次显示文件的一行，然后，等待用户按回车键后显示下一行。
 */
int main(int argc, char *argv[])
{
	string filename, line;
	cout << "输入要显示的文件名字：";
	cin >> filename;
	ifstream in(filename.c_str());
	while (getline(in, line)) {
		cout << line;
		//从控制台获取一个字符，类似于getchar
		cin.get();
	}

	return 0;
}
