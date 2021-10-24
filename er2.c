
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//二分查找法

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个数组,用于存放数据
	printf("输入1-10(可包含):>");
	int k = 0;//定义一个需要查找的数据
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//用arr总数据字节数除以arr中的一个数据的字节数,得出arr中存储数据的数量
	//下面,开始定义数组下标
	int left = 0;
	int right = sz - 1;//数组下标从0开始,最后一位永远是数组数据的总数减一

	while (left <= right)//循环从哪进入,怎么进入
	{
		//判断数据位置
		int mid = (left + right) / 2;//mid定义的是中间值的下标
		if (arr[mid] > k)//判断时,由于变量k的取值为数组内的数据,而变量mid为下标,所以要加arr[],将mid重定义为数组内数据
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("凉了!");
	}
	return 0;
}