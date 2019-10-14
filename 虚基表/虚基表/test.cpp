//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int _a = 1;
//};
//
//class B :virtual public A
//{
//public:
//	int _b = 2;
//};
//
//class C :virtual public A
//{
//public:
//	int _c = 3;
//};
//
//class D :virtual public B, public C
//{
//public:
//	int _d = 4;
//};
//
//int main()
//{
//	//创建一个D对象
//	D d;
//	cout << d._a << endl;
//	cout << d._b << endl;
//	cout << d._c << endl;
//	cout << d._d << endl;
//
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = "a";
	printf("%d", sizeof(arr));
	return 0;
}