/*************************************************************************
	> File Name: 3.4.4_yourpets.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月11日 星期二 23时37分54秒
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

int dog, cat, bird, fish;

void f(int pet)
{
	cout << "pet id number: " << pet << endl;
}

/*
 * c/c++中使用地址表示内存，每个字节有一个地址。
 * 运算符&会告诉我们元素的地址。
 * c/c++中有一个专门存放地址的变量类型——指针（pointer）。
 * 如int *ip;定义一个指向int类型的指针。
 * 对于指针来说，int *ipa, ipb, ipc;意味着只有ipa是指向int类型
 * 的指针，其他都是int类型的变量，并不像一般变量定义的那样理解。
 * 所以，可以一行定义一个指针，不容易混淆。
 * 另外，指针定义的时候一般要初始化，否则，它指向的地址是不确定的，
 * 通常十分危险。
 * 指针的作用可以分为两方面：
 *	1）：为了能在函数内部改变“外部对象”；
 *	2）：为了获得许多灵活的编程技巧。
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	/*
	 * (long)是一种类型转换（cast），意思是将这个元素看成
	 * 是long类型。这个类型转化不是必须的，没有的话，地址会
	 * 以十六进制形式打印。
	 */
	cout << "f(): " << (long)&f << endl;
	cout << "dog: " << (long)&dog << endl;
	cout << "cat: " << (long)&cat << endl;
	cout << "bird: " << (long)&bird << endl;
	cout << "fish: " << (long)&fish << endl;
	cout << "i: " << (long)&i << endl;
	cout << "j: " << (long)&j << endl;
	cout << "k: " << (long)&k << endl;
	/*
	 * 从打印的地址可以看出在main（）内部和外部定义的变量存放在不同的区域。
	 * f（）出现在它自己的区域，在内存中代码和数据一般是分开存放的。
	 */

	return 0;
}
