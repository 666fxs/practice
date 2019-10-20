#include<iostream>
#include<vector>
#include<string>
using namespace std;

//class A
//{
//public:
//	A()
//	{
//
//	}
//};
//class B :public A
//{
//	B()
//	{
//
//	}
//};
//int main()
//{
//	A* p = new A();
//	return 0;
//}

//extern int a;
//int main()
//{
//	
//
//
//
//
//	cout << a << endl;
//	system("pause");
//}
// 

//
//int main()
//{
//	/*int a = 10;
//	int& b = a;
//	b = 5;
//	cout << a << "---" << b << endl;*/
//	 int a = 10;
//	const int& b =a;
//	
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int> v1,v2;
//	v1 = { 1, 2, 3, 4, 5, 6 };
//	v2 = { 7, 8, 9, 10, 11, 12 };
//	//交换两个数组的值
//	for (int i = 0; i < 6; i++)
//	{
//		int tmp;
//		tmp = v1[i];
//		v1[i] = v2[i];
//		v2[i] = tmp;
//	}
//	for (int j = 0; j < 6; j++)
//	{
//		cout << v1[j] << endl;
//	}
//	for (int j = 0; j < 6; j++)
//	{
//		cout << v2[j] << endl;
//	}
//	system("pause");
//	return 0;
//}


//打印零星
//1、多少层
//先打空格
//int main()
//{
//	int floor;
//	cin >> floor;
//	for (int i = 0; i < floor; i++)
//	{
//		for (int j = floor-i-1; j>0; j--)
//		{
//			cout <<"-";
//		}
//		
//		for (int k= 2 * i + 1; k> 0; k--)
//		{
//			cout <<"*";
//		}
//		cout << endl;
//
//	}
//	for (int i = 0; i < floor - 1; i++)
//	{
//		for (int j = i; j >= 0; j--)
//		{
//			cout << "-";
//		}
//		for (int k = 2 * (floor-i-2) + 1; k > 0; k--)
//		{
//			cout << "*";
//
//		}
//		cout << endl;
//	}
//
//		
//		
//
//	
//	system("pause");
//	return 0;
//}




//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int sum = 0;
//	int a;
//	cin >> a;
//	int b = a;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + b;
//		
//	}
//	cout << sum << endl;
//	system("pause");
//}




//4.编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。
//()()()()()()()()()

//定义一个计数器，然后判断最后的值是不是大于零
int main()
{
	char arr[100];
	gets_s(arr);
	int count = 1;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[0] == ')')
		{
			cout << "跨好不匹配" << endl;
			return 0;
		}
		if (count < 0)
		{
			cout << "跨好不匹配" << endl;
		}
		if (arr[i] == '(')
		{
			count++;
		}
		else
		{
			count--;
		}

		

	}
	if (count == 0)
	{
		cout << "跨好匹配" << endl;
	}
	else
	{
		printf("跨好不匹配\n");
	}
	system("pause");
	return 0;
}