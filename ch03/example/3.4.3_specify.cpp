/*************************************************************************
	> File Name: 3.4.3_specify.cpp
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月08日 星期六 21时35分30秒
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
 * float和double一般使用IEEE的浮点数格式
 * float占32位，1个符号位，8个指数位，23个精度位
 * double占64位，1个符号位，11个指数位，52个精度位
 * Demonstartes the use of specifiers（说明符）
 */
int main(int argc, char *argv[])
{
	char c;
	unsigned char cu;
	int i;
	unsigned int iu;
	short int is;
	short iis;		// Same as short int
	unsigned short int isu;
	unsigned short iisu;
	long int il;
	long iil;		// Same as long int
	unsigned long int ilu;
	unsigned long iilu;
	float f;
	double d;
	long double ld;
	cout << "\nchar = " << sizeof(c)
		<< "\nunsigned char = " << sizeof(cu)
		<< "\nint = " << sizeof(i)
		<< "\nunsigned int = " << sizeof(iu)
		<< "\nshort int = " << sizeof(is)
		<< "\nshort = " << sizeof(iis)
		<< "\nunsigned short int = " << sizeof(isu)
		<< "\nunsigned short = " << sizeof(iisu)
		<< "\nlong int = " << sizeof(il)
		<< "\nlong = " << sizeof(iil)
		<< "\nunsigned long int = " << sizeof(ilu)
		<< "\nunsigned long = " << sizeof(iilu)
		<< "\nfloat = " << sizeof(f)
		<< "\ndouble = " << sizeof(d)
		<< "\nlong double = " << sizeof(ld)
		<< endl;

	return 0;
}
