/*************************************************************************
	> File Name: 2.4.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 20时08分07秒
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
#include <fstream>		//文件读写
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
 * 编写一个程序统计文件中特定单词（以空格分割）的出现次数（要求使用string类的==运算符
 * 来查找单词）。
 */
int main(int argc, char *argv[])
{
	int cnt = 0;
	string filename, word, key;
	cout << "输入要统计的文件名字：";
	cin >> filename;
	cout << "输入要统计的单词：";
	cin >> key;
	ifstream in(filename.c_str());
	while (in >> word) {
		if (word == key) {
			++cnt;
		}
	}
	cout << "单词" + key + "在文件" + filename + "中出现的次数是："
		<< cnt << "次。" << endl;

	return 0;
}
