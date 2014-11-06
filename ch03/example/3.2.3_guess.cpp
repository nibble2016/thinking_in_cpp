/*************************************************************************
	> File Name: 3.2.3_guess.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 22时56分20秒
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
 * Guess a number (demonstrates "while")
 */
int main(int argc, char *argv[])
{
	int secret = 15;
	int guess = 0;		//必须初始化
	while (guess != secret) {
		cout << "guess the number: ";
		cin >> guess;
	}
	cout << "You guessed it!" << endl;

	return 0;
}
