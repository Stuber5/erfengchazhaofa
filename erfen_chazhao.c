#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int erfen_chazhao(int arr[], int x, int y)
{
	int left = 0;
	int right = y-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr1) / sizeof(arr1[0]);//��-1��������Ԫ�صĸ�����-1�����Զ��庯���е����±�
	int ret = erfen_chazhao(arr1, k, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	return 0;
}