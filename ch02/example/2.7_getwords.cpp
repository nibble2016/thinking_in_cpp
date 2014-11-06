/*************************************************************************
	> File Name: 2.7_getwords.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 21时57分26秒
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

int main(int argc, char *argv[])
{
	vector<string> words;
	ifstream in("2.7_getwords.cpp");
	string word;

	//以空白来区分单词，可以使用更复杂的方式分割输入
	while (in >> word) {
		words.pb(word);
	}
	for (int i = 0; i < sz(words); ++i) {
		cout << words[i] << endl;
	}

	return 0;
}
