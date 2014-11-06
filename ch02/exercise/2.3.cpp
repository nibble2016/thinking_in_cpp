/*************************************************************************
	> File Name: 2.3.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 20时02分08秒
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
#include <fstream>		//文件操作
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

/*
 * 编写一个程序来打开文件并统计文件中以空格隔开的单词数目。
 */
const double esp = 1e-5;

int main(int argc, char *argv[])
{
	int cnt = 0;
	string filename, word;
	cout << "输入要统计的文件的名字：";
	cin >> filename;
	ifstream in(filename.c_str());
	while (in >> word) {
		++cnt;
	}
	cout << "文件" + filename + "中的单词（以空格分割）个数是："
		<< cnt << endl;

	return 0;
}
