/*************************************************************************
	> File Name: Integer.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年10月10日 星期六 11时07分14秒
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

class Integer {
	int i;
public:
	Integer(int ii): i(ii) {}
	const Integer operator+(const Integer &rv) const {
		cout << "operator+" << endl;
		return Integer(i + rv.i);
	}

	Integer &operator+=(const Integer &rv) {
		cout << "operator+=" << endl;
		i += rv.i;
		return *this;
	}

	// prefix
	const Integer &operator++() {
		cout << "++Integer" << endl;
		i++;
		return *this;
	}

	// postfix
	const Integer operator++(int) {
		cout << "Integer++" << endl;
		Integer before(i);
		i++;
		return before;
	}
};

int main(int argc, char *argv[])
{
	Integer i(1), j(2), k(3);
	k += i + j;
	k++;
	++k;
	return 0;
}
