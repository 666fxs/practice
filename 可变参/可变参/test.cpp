////可变参数函数模板：
//#include<iostream>
//using namespace std;
////template<typename... T2>
////void func()
////{
////	cout << "我是你爸爸！哈哈哈哈" << endl;
////}
////template<typename T1,typename... T2>
////void func(T1 a,T2... b)
////{
////	cout << a << endl;
////	func(b...);
////
////}
////
////int main()
////{
////	func(12,22,12,"沙雕","你爸爸的");
////	system("pause");
////	return 0;
////}
//
////函数模板的特化和偏特化
////template<>
//
////template<class T,class T1>
////T1 func(T1 a, T b)
////{
////	
////	return a + b;
////}
////template<>
////int func(int a, int b)
////{
////	cout << "用了我的int特化版本" << endl;
////	return a + b;
//////}
////template<class T>
////int func(int a, T b)
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
////总结：函数模板不可以偏特化
//template<class T1,class T2>
//int func(T1 a,T2 b)
//{
//	return a + b;
//}
//
//template<class T2>
//int func(int a, T2 b)
//{
//	cout << "使用了特化得版本" << endl;
//	return a + b;
//}
//
//
//int main()
//{
//
//	cout << func(1, 2) << endl;
//	system("pause");
//	return 0;
//}
////模板编程


//quan特化：
#include<iostream>
using namespace std;
//template<class T,class U>
//class A
//{
//public:
//	A()
//	{
//		cout << "泛化版本" << endl;
//	}
//
//};
//
//template<>
//class A<int, int>
//{
//public:
//	A()
//	{
//		cout << "int,int特化版本" << endl;
//	}
//};
//
//template<>
//class A<int, double>
//{
//public:
//	A()
//	{
//		cout << "int,double特化版本" << endl;
//	}
//};
//
//int main()
//{
//	A<double,int> a;
//	system("pause");
//	return 0;
//}


//特化类得成员函数得形式如下所述
//这个里面只是特化了成员函数，没有特化模板

//template<class T1,class T2>
//class A
//{
//public:
//
//	A()
//	{
//		cout << "A得泛化版本" << endl;
//	}
//	void func()
//	{
//		cout << "我是猪" << endl;
//	}
//
//};
//void A<int, int>::func()
//{
//	cout << "我把你特化了哦，小猪猪" << endl;
//}
//int main()
//{
//	A<int,int> a;
//	a.func();
//	system("pause");
//	return 0;
//}


//偏特化
//1\从参数模板数量
//1、当有多个参数得时候，可以这么写
//template<class T,class U,class A>   
//class A<int,U,double>

//template<class T,class U,class W>
//class A
//{
//public:
//	A()
//	{
//		cout << "我是你老祖宗" << endl;
//	}
//};
//
//
//template<class U>
//class A<int ,U,double>
//{
//public:
//	A()
//	{
//		cout << "我是特殊的，int U double" << endl;
//	}
//};
//
//int main()
//{
//	A<int, int, double> a;
//	system("pause");
//	return 0;
//}

//2\从参数得范围，参数得范围缩小了
 template<class T>
 class A
 {
 public:
	 A()
	 {
		 cout << "A00000" << endl;
	 }

 };

 template<class T>
 class A<const T>
 {
 public:
	 A()
	 {
		 cout << "const" << endl;

	 }
 };

 int main()
 {
	 A<const int> a;
	 system("pause");
	 return 0;
 }