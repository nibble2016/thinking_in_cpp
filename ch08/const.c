/*************************************************************************
	> File Name: const.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月21日 星期三 11时20分39秒
 ************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	const int a = 10;
	int c = 10;
	// c语言中不能这样写
	//int b[a] = {0};
	//printf("%lu\n", sizeof(b));
	printf("%d\n", a);
	const int b = a + c;
	printf("%d\n", b);
	return 0;
}
