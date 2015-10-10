/*************************************************************************
	> File Name: SmartPointer.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年10月10日 星期六 15时18分56秒
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

class Obj {
	static int i, j;
public:
	void f() const { cout << i++ << endl; }
	void g() const { cout << j++ << endl; }
};

int Obj::i = 47;
int Obj::j = 11;

class ObjContainer {
	vector<Obj *> a;
public:
	void add(Obj *obj) {
		a.push_back(obj);
	}
	friend class SmartPointer;
};

// 还可以将类SmartPointer嵌入ObjContainer中
class SmartPointer {
	ObjContainer &oc;
	int idx;
public:
	SmartPointer(ObjContainer &objc): oc(objc) {
		idx= 0;
	}

	bool operator++() {		// prefix
		if (idx >= int(oc.a.size())) {
			return false;
		}
		if (oc.a[++idx] == 0) {
			return false;
		}
		return true;
	}

	bool operator++(int) {
		return operator++();		// use prefix version
	}

	Obj *operator->() const {
		return oc.a[idx];
	}
};

class Dog {
public:
	int run(int i) const {
		cout << "run" << endl;
		return i;
	}

	int eat(int i) const {
                return i;
	}

};

int main(int argc, char *argv[])
{
	/*const int sz = 10;
	Obj o[sz];
	ObjContainer oc;
	for (int i = 0; i < sz; ++i) {
		oc.add(&o[i]);
	}
	SmartPointer sp(oc);
	do {
		sp->f();		// operator dereference operator call
		sp->g();
		cout << endl;
	} while (sp++);*/
	return 0;
}
