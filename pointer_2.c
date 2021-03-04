#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针运算
//1.指针+-整数
/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;
	int* p = &arr[9];//10

	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d\n", *p);
	//	p = p + 1;//p++
	//}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		//p += 2; //奇数
		p -= 2; //10 8 6 4 2 
	}
	return 0;
}
*/



//2.指针-指针
/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	//指针-指针得到的是中间的元素的个数
	//小的-大的绝对值是元素的个数
	return 0;
}
*/

/*
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}


int main()
{
	//strlen - 求字符串长度
	//递归 - 模拟实现了strlen - 计数器的方式1，递归的方式2
	//
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}
*/



//3.指针的关系运算

/*
#define N_VALUES 5
float values[N_VALUES];
float* vp;
//指针+-整数：指针的关系运算
for (vp = &values[0]; vp < values[N_VALUES])
{
	*vp++ = 0;
}

//推荐使用这种方法
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp;
	//指针+-整数：指针的关系运算
	for (vp = &values[N_VALUES]; vp > &values[0])
	{
		*--vp = 0; //将下标0-4都赋值0
	}
	return 0;
}
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较

//换一种优化写法；不推荐使用这种方法
#define N_VALUES 5
float values[N_VALUES];
float* vp;
//指针+-整数：指针的关系运算
for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
{
	*vp = 0; //将下标0-4都赋值0
}
*/


