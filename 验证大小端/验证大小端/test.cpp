//#include<stdio.h>
//#include<stdlib.h>
////int main()
////{
////	int a = 1;//00 00 00 01
////	printf("%d\n", *((char*)&a));
////	system("pause");
////	return 0;
////}
//
//int Storage_method()//函数
//{
//	int a = 1;// 因为1 在计算机存储中是 01 00 00 00
//	return *(char*)&a;//将a的地址强制类型转换为char*类型 保证一次访问一个字节
//}
//int main()
//{
//	int ret = Storage_method();
//	if (1 == ret)//解引用后的返回值 为1 则得到是小端存储
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//
////使用联合体
//
//
//union A
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	union A a;
//	a.a = 1;
//	printf("%d\n", a.c);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 11;//1011
//
//	return 0;
//}


#include<string>
#include<iostream>
#include<vector>
using namespace std;


//int main()
//{
//	char arr[10] = "asdfc";
//	int a = sizeof("abcd");
//	int b = strlen(arr);
//	cout << a << b << endl;
//	system("pause");
//	return 0;
//}

int main()
{
	vector<int > v{1,2,3,4,5,5,5,6};
	//vector <int>::iterator it;
	for (vector<int>::iterator  Begin = v.begin(); Begin != v.end(); )
	{
		if (*Begin == 5)
		{
			Begin=v.erase(Begin);
		}
		else
			Begin++;
		
	}
	for (int i = 0; i <= sizeof(v) / 4; i++)
	{
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}



//int main()
//
//{
//
//	vector<int> array;
//
//	array.push_back(1);
//
//	array.push_back(3);
//
//	array.push_back(3);
//
//	array.push_back(5);
//	array.push_back(3);
//	array.push_back(3);
//	array.push_back(5);
//
//
//
//
//	vector<int>::iterator it;
//
//	for (it = array.begin(); it != array.end();)
//
//	{
//
//		if (*it == 3)
//
//		{
//
//			it = array.erase(it);
//
//		}
//
//		else
//
//			it++;
//
//	}
//
//	for (it = array.begin(); it != array.end(); it++)
//
//	{
//
//		cout << *it << endl;
//
//	}
//
//	system("pause");
//
//	return 0;
//
//}
