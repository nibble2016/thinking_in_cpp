/*************************************************************************
	> File Name: 3.7.12_cast.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2015年01月09日 星期五 23时24分09秒
 ************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	const int i = 0;
	int *p = (int *)&i;
	return 0;
}
