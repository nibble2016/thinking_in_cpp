/*************************************************************************
	> File Name: 2.2.1.4.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 20时35分40秒
 ************************************************************************/

#include <stdio.h>

int add(int, int);

int main(int argc, char *argv[])
{
	printf("%d\n", add(1, 2));
	return 0;
}

//c语言在函数定义时，参数要求有标示符，c++则不要求
//int add(int, int)
int add(int a, int b)
{
	return a + b;
}
