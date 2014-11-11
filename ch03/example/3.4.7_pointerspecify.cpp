/*************************************************************************
	> File Name: 3.4.7_pointerspecify.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月12日 星期三 00时07分39秒
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
 * 基本数据类型可以使用修饰符，现在引入了指针和引用，
 * 就可以和他们产生更多的指针类型。
 * 其中，有一种特殊的指针类型，void，如果声明指针类型为void*，
 * 它意味着任何类型的地址都可以间接引用那个指针。而如果声明为
 * int*，则只能对int型变量的地址间接引用那么指针。
 * 我们不能使用void引用。
 */
int main(int argc, char *argv[])
{
	void *vp;
	char c;
	int i;
	float f;
	double d;
	//任何类型的地址都可以赋值给void指针
	vp = &c;
	vp = &i;
	vp = &f;
	vp = &d;

	//我们间接引用一个void*指针，就会丢失关于类型的信息。
	//所以在使用之前必须转换为正确的类型。
	//但这也带来了另一个问题，我们也可以它看成是其他的不正确的类型
	//这就可能使程序崩溃。如一个int的指针，看成了double，那么就可能
	//扩展了指针指向的空间。
	i = 99;
	vp = &i;
	cout << "i = " << i << endl;
	//错误，必须转成正确的类型才能使用
	//cout << "*vp = " << *vp << endl;
	cout << "*(int *)vp = " << *(int *)vp << endl;
	*(int *)vp = 10;
	cout << "i = " << i << endl;
	cout << "*(int *)vp = " << *(int *)vp << endl;

	return 0;
}
