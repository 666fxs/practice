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
//	//�������������ֵ
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


//��ӡ����
//1�����ٲ�
//�ȴ�ո�
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




//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
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




//4.��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ��֡�
//()()()()()()()()()

//����һ����������Ȼ���ж�����ֵ�ǲ��Ǵ�����
int main()
{
	char arr[100];
	gets_s(arr);
	int count = 1;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[0] == ')')
		{
			cout << "��ò�ƥ��" << endl;
			return 0;
		}
		if (count < 0)
		{
			cout << "��ò�ƥ��" << endl;
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
		cout << "���ƥ��" << endl;
	}
	else
	{
		printf("��ò�ƥ��\n");
	}
	system("pause");
	return 0;
}