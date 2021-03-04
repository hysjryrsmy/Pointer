#define _CRT_S_CURE_NO_WARNINGS
#include <stdio.h>

//二级指针:存放一级指针变量的地址
/*
int main()
{
	int a = 10;
	int * pa = &a;
	int* * ppa = &pa;  //ppa就是二级指针
	//int** * pppa = &ppa;//pppa就是三级指针；以此类推
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);


	return 0;
} 
*/


//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	//int arr[10];
	int* arr[3] = { &a,&b,&c };  //指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", *(arr[i]));
	}
	return 0;
}