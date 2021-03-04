#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//指针和数组
/*
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);  //地址-数组名表示的是数组首元素的地址
	printf("%p\n", arr+1);//4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//4

	//1. &arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名取出的是整个数组的地址
	//2.sizeof（arr） - sizeof（数组名） - 数组名表示的整个数组 - sizeof（数组名）计算的是整个数组的大小
	//除了这两种情况下，任何地方的数组名都是首元素的地址

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//40

	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	for (i = 0; i < 10; i++)
	{
		//printf("%d  ", arr[i]);
		printf("%d  ", *(p+i));
	}


	for (i = 0; i < 10; i++)
	{
		printf("%p ======   %p\n",  p+i,&arr[i]);
	}

	return 0;
}
*/

//数组可以通过指针实现
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;   //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *(p + i));
	}
	return 0;
}