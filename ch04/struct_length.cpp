#include <iostream>

using namespace std;

//空
struct S0 {
};

struct S1 {
	char a;
	long b;
};

struct S2 {
	long b;
	char a;
};

struct S3 {
	char c;
	struct S1 d;		//结构体
	long e;
};

struct S4 {
	char a;
	long b;
	static long c;		//静态
};

struct S5 {
	char a;
	long b;
	char name[5];		//数组
};

//含有一个数组
struct S6 {
	char a;
	long b;
	int name[5];		//数组
};

struct student0 {
	char name[5];
	int num;
	short score;
};

struct student1 {
	int num;
	char name[5];
	short score;
};

struct student2 {
	int num;
	short score;
	char name[5];
};

union union1 {
	long a;
	double b;
	char name[9];
};

union union2 {
	char a;
	int b[5];
	double c;
	int d[3];
};

int main(int argc, char *argv[])
{
	cout << "char: " << sizeof(char) << endl;	//1
	cout << "long: " << sizeof(long) << endl;	//8
	cout << "int:  " << sizeof(int) << endl;	//4
	cout << "short:  " << sizeof(short) << endl;	//2
	cout << "S0: " << sizeof(S0) << endl;	//1
	cout << "S1: " << sizeof(S1) << endl;	//16
	cout << "S2: " << sizeof(S2) << endl;	//16
	cout << "S3: " << sizeof(S3) << endl;	//32
	cout << "S4: " << sizeof(S4) << endl;	//16
	cout << "S5: " << sizeof(S5) << endl;	//24
	cout << "S6: " << sizeof(S6) << endl;	//40
	cout << "union1 :" << sizeof(union1) << endl;	// 16
	cout << "union2 :" << sizeof(union2) << endl;	// 24
	cout << "student0: " << sizeof(student0) << endl;	// 16
	cout << "student1: " << sizeof(student1) << endl;	// 12
	cout << "student2: " << sizeof(student2) << endl;	// 12

	return 0;
}
