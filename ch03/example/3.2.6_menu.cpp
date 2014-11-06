/*************************************************************************
	> File Name: 3.2.6_menu.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时05分44秒
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
 * Simple menu program demostrating
 * the use of "break" and "continue"
 */
int main(int argc, char *argv[])
{
	char c;			//To hold response
	while (true) {		//c++关键字true和false，类型为bool
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;
		if (c == 'q') {
			break;		//Out of "while (true)"
		}
		if (c == 'l') {
			cout << "LEFT MENU:" << endl;
			cout << "select a or b: ";
			cin >> c;
			if (c == 'a') {
				cout << "you chose 'a'" << endl;
				continue;		//Back to main menu
			}
			if (c == 'b') {
				cout << "you chose 'b'" << endl;
				continue;		//Back to main menu
			} else {
				cout << "you didn't choose a or b!" << endl;
				continue;		//Back to main menu
			}
		}
		if (c == 'r') {
			cout << "RIGHT MENU:" << endl;
			cout << "select c or d: ";
			cin >> c;
			if (c == 'c') {
				cout << "you chose 'c'" << endl;
				continue;		//Back to main menu
			}
			if (c == 'd') {
				cout << "you chose 'd'" << endl;
				continue;		//Back to main menu
			} else {
				cout << "you didn't choose c or d!" << endl;
				continue;		//Back to main menu
			}
		}
		cout << "you must type l or r or q!" << endl;
	}
	cout << "quitting menu..." << endl;

	return 0;
}
