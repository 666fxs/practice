////�ɱ��������ģ�壺
//#include<iostream>
//using namespace std;
////template<typename... T2>
////void func()
////{
////	cout << "������ְ֣���������" << endl;
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
////	func(12,22,12,"ɳ��","��ְֵ�");
////	system("pause");
////	return 0;
////}
//
////����ģ����ػ���ƫ�ػ�
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
////	cout << "�����ҵ�int�ػ��汾" << endl;
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
////�ܽ᣺����ģ�岻����ƫ�ػ�
//template<class T1,class T2>
//int func(T1 a,T2 b)
//{
//	return a + b;
//}
//
//template<class T2>
//int func(int a, T2 b)
//{
//	cout << "ʹ�����ػ��ð汾" << endl;
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
////ģ����


//quan�ػ���
#include<iostream>
using namespace std;
//template<class T,class U>
//class A
//{
//public:
//	A()
//	{
//		cout << "�����汾" << endl;
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
//		cout << "int,int�ػ��汾" << endl;
//	}
//};
//
//template<>
//class A<int, double>
//{
//public:
//	A()
//	{
//		cout << "int,double�ػ��汾" << endl;
//	}
//};
//
//int main()
//{
//	A<double,int> a;
//	system("pause");
//	return 0;
//}


//�ػ���ó�Ա��������ʽ��������
//�������ֻ���ػ��˳�Ա������û���ػ�ģ��

//template<class T1,class T2>
//class A
//{
//public:
//
//	A()
//	{
//		cout << "A�÷����汾" << endl;
//	}
//	void func()
//	{
//		cout << "������" << endl;
//	}
//
//};
//void A<int, int>::func()
//{
//	cout << "�Ұ����ػ���Ŷ��С����" << endl;
//}
//int main()
//{
//	A<int,int> a;
//	a.func();
//	system("pause");
//	return 0;
//}


//ƫ�ػ�
//1\�Ӳ���ģ������
//1�����ж��������ʱ�򣬿�����ôд
//template<class T,class U,class A>   
//class A<int,U,double>

//template<class T,class U,class W>
//class A
//{
//public:
//	A()
//	{
//		cout << "������������" << endl;
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
//		cout << "��������ģ�int U double" << endl;
//	}
//};
//
//int main()
//{
//	A<int, int, double> a;
//	system("pause");
//	return 0;
//}

//2\�Ӳ����÷�Χ�������÷�Χ��С��
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