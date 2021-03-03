#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.指针是什么
//指针就是变量，变量里面存的是地址，也就是说指针就是地址，存放内存单元的地址；存放在指针中的值都被当成地址处理
//指针的大小在32位平台是4个字节，在64位平台是8个字节
/*
int main()
{
	int a = 10;  
	int* p = &a; //p:指针变量

	return 0;
}
*/




//2.指针和指针类型
/*
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}
*/
/*
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;

	//char* pc = &a;
	//*pc = 0;
	return 0;
}
*/

//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小。
//int* p ：*p能够访问4个字节
//char* p ：*p能够访问1个字节
//double* p ：*p能够访问8个字节

/*
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;

	printf("%p\n", pa);
	printf("%p\n", pa+1);//跳过一个整形，向后走了四个字节

	printf("%p\n", pc);
	printf("%p\n", pc+1);//跳过一个字符，向后走了一个字节

	return 0;
}
*/

//指针类型决定了：指针走一步走多远（指针的步长）;单位是字节
//int*p: p+1-->4
//char*p: p+1 -->1
//double*p: p+1 -->8


int main()
{
	int arr[10] = { 0 };
	//int* p = arr; //数组名——首元素的地址
	char* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}


