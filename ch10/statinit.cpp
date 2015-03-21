/*************************************************************************
	> File Name: statinit.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: Sat 21 Mar 2015 10:47:02 PM CST
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

using namespace std;

int x = 100;

class Demo {
	static int x;
	static int y;
public:
	void print(void) const
	{
		cout << "Demo::x = " << x << endl;
		cout << "Demo::y = " << y << endl;
		// 全局x
		cout << "::x = " << ::x << endl;
	}
};

int Demo::x = 1;
int Demo::y = x + 1;		// Demo::x + 1, not ::x;

int main(int argc, char *argv[])
{
	Demo d;
	d.print();
	cout << x << endl;

	return 0;
}
