#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//int main()
//{
//	
//	char array[10] = {1,2,3,4,5,6,7,8,9,20};
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (array[i] >= array[j])
//			{
//				int temp = 0;
//				temp = array[i];
//				array[i] = array[j];
//				array[j] = temp;
//			}
//		}                                          //ð������
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	system("pause");
//	return 0;
//}


//ϣ������

//int main()
//{
//	int array[10] = { 1, 3, 2, 4, 3, 5, 6, 7, 4, 6 };
//	//����һ�����,��gap���������
//	int gap = sizeof(array) / sizeof(int)* 2;
//	while (gap != 0)
//	{
//		//����һ����С��������
//		for (int i = 0; i< 10; i++)
//		{
//			for (int j = i+gap; j < 10;j+=gap )
//			{
//				if (array[i] > array[j])
//				{
//					int tmp = array[i];
//					array[i] = array[j];
//					array[j] = tmp;
//				}
//			}
//		}
//		gap /= 2;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d->", array[i]);
//	}
//	system("pause");
//	return 0;
//}


//ֱ��ѡ������
//int main()
//{
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//������ŵ�ѭ��
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i + 1; j < 10; j++)
//		{
//			int min = array[i];
//			if (min<array[j])
//			{
//				int tmp = array[i];
//				array[i] = array[j];
//				array[j] = tmp;
//
//			}
//		}
//
//	}
//	for (int i = 0; i < 10; i++)
//	{
//				printf("%d->", array[i]);
//	}
//	system("pause");
//	system("pause");
//	return 0;
//}


void func() { int i, j, k = 0; for (i = 0, j = -1; j = 0; i++, j++) { k++; }}int main() { cout << (func());
system("pause");
}

