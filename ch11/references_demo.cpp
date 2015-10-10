/*************************************************************************
	> File Name: references_demo.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年10月08日 星期四 20时36分22秒
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

const int &q = 12;

/*
 * 当引用被创建，它必须初始化为一个现有的对象，也可以说引用必须和存储单元联系
 * 引用不能为NULL，一旦引用被初始化为一个对象，它就不能改变为另一个对象的引用
 */
int x = 0;
int &y = x;

class HowMany {
	static int cnt;
	string name;
public:
	HowMany(const string &id): name(id) { cnt++; }
	HowMany(const HowMany &h): name(h.name) {
		++cnt;
		name += " copy";
		print("HowMany(const HowMany &h)");
	}
	void print(const string &msg) {
		if (msg.size() != 0) {
			cout << msg << ":";
		}
		cout << name << ":object count = " << cnt << endl;
	}
	~HowMany() {
		--cnt;
		print("~HowMany");
	}
};

int HowMany::cnt = 0;

HowMany fun(HowMany a)
{
	a.print("a argument inside f()");
	return a;
}

class WithCC {
public:
	WithCC() {}
	WithCC(const WithCC &w) {
		cout << "WithCC(const WithCC &w)" << endl;
	}
};

class WoCC {
public:
	string name;
	WoCC(const string &id = ""): name(id) {}
	void print(const string &msg = "") const {
		if (msg.size() != 0) {
			cout << msg << ": ";
		}
		cout << name << endl;
	}
};

class Compoiste {
	WithCC withcc;
	WoCC wocc;
public:
	Compoiste(): wocc("Compoiste()") {}
	void print(const string &msg = "") const {
		wocc.print(msg);
	}
};

class Widget {
	void f(int) const { cout << "Widget::f()" << endl; }
	void g(int) const { cout << "Widget::g()" << endl; }
	void h(int) const { cout << "Widget::h()" << endl; }
	void i(int) const { cout << "Widget::i()" << endl; }
	enum { cnt = 4 };
	void (Widget::*fptr[cnt])(int) const;
public:
	Widget() {
		fptr[0] = &Widget::f;		// full spec required
		fptr[1] = &Widget::g;		// full spec required
		fptr[2] = &Widget::h;		// full spec required
		fptr[3] = &Widget::i;		// full spec required
	}

	void select(int i, int j) {
		if (i < 0 || i >= cnt) {
			return;
		}
		(this->*fptr[i])(j);
	}

	int count() const {
		return cnt;
	}
};

int main(int argc, char *argv[])
{
	/*int a = 10;
	cout << "x = " << x << ", y = " << y << ", a = " << a << endl;
	y = a; ++y;
	cout << "x = " << x << ", y = " << y << ", a = " << a << endl;*/

	/*HowMany h("HowMany");
	h.print("after construction of h");
	HowMany h2 = fun(h);
	//fun(h);
	h2.print("after call to fun");*/

	/*Compoiste c;
	c.print("Contents of c");
	cout << "Calling Composite copy-constructor" << endl;
	Compoiste c2 = c;		// Calls copy-constructor
	c2.print("Contents of c");*/

	/*WoCC a("gwq");
	string WoCC::*pstr = &WoCC::name;	// pointer to member
	a.print();
	a.*pstr = "nihao";
	a.print();*/

	// pointer to member function
	Widget w;
	for (int i = 0; i < w.count(); ++i) {
		w.select(i, i);
	}
	return 0;
}
