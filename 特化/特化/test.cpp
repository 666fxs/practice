#include<iostream>
using namespace std;


//template<class T>
//T sum(T a, T b)
//{
//	cout << "����" << endl;
//	return a + b;
//}
//
//template<>
//double sum<double>(double a, double b)
//{
//	cout << "ȫ�ػ�" << endl;
//	return a + b;
//}
//int main()
//{
//
//
//	cout << sum(1.2, 2.0) << endl;
//	system("pause");
//	return 0;
//}

//������ģ�����
//template<class T, class T2>
//T sum(T b, T2 a)
//{
//	return b + a;
//}
//
//
//
//int main()
//{
//	
//	cout << sum<double>(3.2,2.2) << endl;
//	system("pause");
//	return 0;
//}


//����ػ�
//template<class T>
//class A
//{
//public:
//	A()
//	{
//		cout << "A�ķ���" << endl;
//	}
//};
//
//template<>
//class A<int>
//{
//public:
//	A()
//	{
//		cout << "A���ػ�" << endl;
//	}
//};
//
//int main()
//{
//	A<double> a;
//	system("pause");
//	return 0;
//}


//template<class T, size_t N  = 20>
//class Array
//{
//public: T& operator[](size_t index)
//{
//			return _array[index];
//}
//		const T& operator[](size_t index)const
//		{
//			return _array[index];
//		}
//		size_t Size()const
//		{
//			return _size;
//		}
//		bool Empty()const
//		{
//			return 0 == _size;
//		}
//private: T _array[N];
//		 size_t _size;
//};
//int main()
//{
//	Array<int> a;
//	return 0;
//}


//template<class... T>
//
//void myfunc(T... obj)
//{
//	cout << sizeof...(T) << endl;
//
//}
//
//int main()
//{
//	myfunc(1,2,3,4);
//	system("pause");
//	return 0;
//}


//�����ݵĲ���ȫ����ӡ����
//#include<stdlib.h>
//
//
//void func()
//{
//	cout << "jieshu" << endl;
//}
//
//template<class T, class... F>
//void func(const T& a,const F&... obj )
//{
//	cout << a << endl;
//	func(obj...);
//}
//
//int main()
//{
//	func(1, 2, 3, 4, 5);
//	system("pause");
//	
//	return 0;
//}


