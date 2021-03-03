#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//野指针
//野指针就是指针指向的位置是不可知的

//1.指针未初始化
/*
int main()
{
	//int a;  //局部变量不初始化，默认是随机值
	int* p;  //局部的指针变量，就被初始化随机值
	*p = 20; //未初始化的指针变量，出现了问题
	return 0;
}
*/


//2.指针越界访问
/*
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围查出数组arr的范围时，p就是野指针
		*p =i;
		p++;
		//*p++ = i;
	}
	 
	return 0;
}
*/


//3.指针指向的空间释放
/*
int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	printf("%d\n", *p);
	return 0;
}
*/

//如何规避野指针
//1.指针初始化
int main()
{
	int b = 0;
	int a = 10;
	int* pa = &a;//初始化
	int* p = NULL;//NULL——用来初始化指针的，给指针赋值
}

//2.小心指针越界
//3.指针指向空间释放即时置NULL
	int a = 10;
	int* pa = &a;
	*pa = 20;
	pa = NULL;

//4.指针使用之前检查有效性


