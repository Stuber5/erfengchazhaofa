
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���ֲ��ҷ�

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������,���ڴ������
	printf("����1-10(�ɰ���):>");
	int k = 0;//����һ����Ҫ���ҵ�����
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//��arr�������ֽ�������arr�е�һ�����ݵ��ֽ���,�ó�arr�д洢���ݵ�����
	//����,��ʼ���������±�
	int left = 0;
	int right = sz - 1;//�����±��0��ʼ,���һλ��Զ���������ݵ�������һ

	while (left <= right)//ѭ�����Ľ���,��ô����
	{
		//�ж�����λ��
		int mid = (left + right) / 2;//mid��������м�ֵ���±�
		if (arr[mid] > k)//�ж�ʱ,���ڱ���k��ȡֵΪ�����ڵ�����,������midΪ�±�,����Ҫ��arr[],��mid�ض���Ϊ����������
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("����!");
	}
	return 0;
}