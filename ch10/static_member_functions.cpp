/*************************************************************************
	> File Name: static_member_functions.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年10月08日 星期四 10时43分02秒
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
typedef pair<int, int> pii;
typedef long long ll;

const double esp = 1e-5;

class Demo {
	int x;
	static int y;
public:
	Demo(int a = 0): x(a) {
		y = a;
	}

	int val() const { return x; }

	static int incr() {
		// x++; // error, static member function cannot access non-static member data
		return ++y;
	}

	static int f() {
		// val() // cannot access non-static member function
		return incr();	// ok
	}

	static int yval() {
		return y;
	}
};

int Demo::y = 0;

class Singleton {
	static Singleton s;
	int a;
	Singleton(int aa): a(aa) {}
	Singleton(const Singleton&);	// prevent copy-construction
public:
	static Singleton *instance() { return &s; }
	int val() const { return a; }
};

Singleton Singleton::s(34);

int main(int argc, char *argv[])
{
	Demo d;
	Demo *dp = &d;
	d.f();
	dp->f();
	Demo::f();		// f static member function
	cout << d.val() << ":" << Demo::yval() << endl;

	Singleton *sp = Singleton::instance();
	cout << sp->val() << endl;
	return 0;
}
