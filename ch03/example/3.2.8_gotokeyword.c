/*************************************************************************
	> File Name: 3.2.8_gotokeyword.c
	> Author: gwq
	> Mail: gwq5210@qq.com 
	> Created Time: 2014年11月06日 星期四 23时25分01秒
 ************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 1;
	int val = 0;
	//在C99中支持类似c++的这种使用方式 
	//for (int i = 1; i < 1000; ++i) {
		//for (int j = 1; j < 100; ++j) {
	for (i = 1; i < 1000; ++i) {
		for (j = 1; j < 100; j += 10) {
			val = i * j;
			if (val > 47000) {
				goto bottom;
				//Break would only go to the outer 'for'
			}
		}
	}
bottom:			//A label
	printf("%d\n", val);

	return 0;
}
