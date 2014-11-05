/*************************************************************************
	> File Name: 2.2.1.1.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月05日 星期三 20时05分20秒
 ************************************************************************/

#include <stdio.h>

//在c语言中，空参数代表可以接受任意参数（任意数目，任意类型）
int func()
{
	return 3;
}

int main(int argc, char *argv[])
{
	int a = func(2, 3);
	int b = func(2.3);
	printf("%d %d\n", a, b);

	return 0;
}
