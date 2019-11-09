////函数模板的偏特化、函数重载
//
//#include<iostream>
//using namespace std;
////泛型的模板
////template<class T,class U>
////int func(T a, U b)
////{
////	cout << "func F" << endl;
////	return a + b;
////}
//
////template<>
////int func(int a, int b)
////{
////	cout << "func QT" << endl;
////	return a + b;
////}
//
////template<class U>
////int func<int,U>(int a, U b)
////{
////	return a + b;
////}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	cout << func(a, b) << endl;
////	system("pause");
////	return 0;
////}
//
////
////template<class T>
////class A
////{
////public:
////	A()
////	{
////		cout << "A的泛化版本" << endl;
////	}
////};
////
////
////template<>
////class A<int>
////{
////public:
////	A()
////	{
////		cout << "A的特化int" << endl;
////	}
////
////};
////
////template<class  T>
////class A<const T>
////{
////public:
////	A()
////	{
////		cout << "特化 const" << endl;
////	}
////};
////int main()
////{
////	A<const int> a;
////	system("pause");
////	return 0;
////}
//
//
////可变参函数
//
////void func()
////{
////	cout << "结束递归" << endl;
////}
////
////template<class T,class... U>
////void func(T a,U... b)
////{
////	cout << a << endl;
////	func(b...);
////
////}
////
////int main()
////{
////	func(1, 2, 3, 4, 5, 6);
////	system("pause");
////	return 0;
////}
//
////可变参，模板
//
////template<class...U>
////class A
////{
////public:
////	A()
////	{
////		cout << "我是子类的构造函数" << endl;
////	}
////};
////template<>
////class A<>
////{
////public:
////	A()
////	{
////		cout << "000000" << endl;
////	}
////};
////template<class T,class... U>
////class A<T,U...>:public A<U...>
////{
////public:
////
////	A()
////	{
////		cout << "我是父亲类的构造函数" << endl;
////	}
////};
////
////int main()
////{
////	A<double, int, int, int> a;
////	system("pause");
////}
//


#include<iostream>
using namespace std;
class A
{};
int main()
{
	A* a = new A[2];
	cout << sizeof(a) << endl;
	system("pause");
	return 0;
}