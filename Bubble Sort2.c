//优化
#include<stdio.h>
#define N 10

int main()
{
	int arr[N] = { 3,0,1,2,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;
	int count = 1;
	int flag = 10;

	while (flag > 0)
	{
		k = flag;//用k记录每一轮的比较次数
		flag = 0;//while循环结束条件
		for (j = 0; j < k - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = j + 1;//记录符合交换条件的最终位置
			}
		if (flag)
			count++;//记录比较轮次
	}
	printf("比较轮次:%d\n", count);

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
