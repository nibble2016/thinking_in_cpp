/*************************************************************************
	> File Name: 3.2.7_menu.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时17分04秒
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
 * A menu using a switch statement
 * switch语句后的括号里是一个产生整数值的表达式，case后边跟的也是整数值
 */
int main(int argc, char *argv[])
{
	bool quit = false;		//Flag for quitting
	while (quit != true) {
		cout << "Select a, b, c or q to quit: ";
		char response;
		cin >> response;
		switch (response) {
			case 'a': cout << "you chose 'a'" << endl;
				  break;
			case 'b': cout << "you chose 'b'" << endl;
				  break;
			case 'c': cout << "you chose 'c'" << endl;
				  break;
			case 'q': cout << "quitting menu" << endl;
				  quit = true;
				  break;
			default : cout << "Please use a, b, c or q!" << endl;
		}
	}

	return 0;
}
