/*************************************************************************
	> File Name: constructor.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月20日 星期二 23时11分22秒
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

struct Node {
	int a, b;
	//Node(int x, int y)
	//{
		//a = x;
		//b = y;
	//}
	void print(void)
	{
		printf("%d %d\n", a, b);
	}
};

// 析构函数在变量超出作用域的时候调用
int main(int argc, char *argv[])
{
	// class也可以这样
	// 有构造函数的结构体可以这样
	Node node1[] = {Node(1, 2), Node(2, 3)};
	// 有构造函数的貌似这样写c++11支持
	Node node2[] = {{1, 2}, {2, 3}};
	//Node node2[] = {Node(1, 2), Node(2, 3)};

	node1[0].print();
	node2[0].print();

	return 0;
}
