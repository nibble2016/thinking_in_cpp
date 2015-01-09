/*************************************************************************
	> File Name: 3.6.5.const.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月09日 星期五 22时56分55秒
 ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	// c中的const变量可以不初始化
	const int i;
	const int j = 0;
	printf("%d %d\n", i, j);

	return 0;
}
