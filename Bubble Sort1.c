#include<stdio.h>
#define N 10 

int main(void)
{
	int arr[N] = { 0,3,2,5,8,4,7,6,9,1 };//创建一个大小为N的数组，方便理解算法
	int i = 0;//控制走访轮数
	int j = 0;//控制数组元素下标
	int temp = 0;//申请一个临时的空间（数组元素交换时需要一个临时空间）

	for (i = 0; i < N - 1; i++)//最多走访N-1轮
	{
		for (j = 0; j < N - 1- i; j++)//每一轮相邻元素只需比较N-1-i次即可
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//for循环执行完毕，排序完成，依次打印出排序完成后的数组元素

	for (i = 0; i < N; i++)//变量i清零赋予新的意义：控制打印个数
	{
		printf("%d ", arr[i]);
	}

	return 0;
} 
