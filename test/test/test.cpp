#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
//class A
//{
//public:
//
//	A(int a , int b = 1)
//	{
//
//	}
//};
//
//class B:public A
//{
//public:
//	B(int a, int b = 2) :A(2)
//	{
//
//	}
//
//};
//class C
//{
//
//};
//int main()
//{
//
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{
//		cout << "A的默认构造函数" << endl;
//	}
//
//	operator int() const
//	{
//		return _a;
//	}
//	operator double() const
//	{
//		return _b;
//	}
//public:
//	int _a = 10;
//	double _b = 12.13;
//};

//int main()
//{
//	A a;
//	cout << double(a) << endl;
//	system("pause");
//}


//设计一个类只可以在堆上面创建

//class A{
//public:
//	static A* onlydui()
//	{
//		return new A;
//	}
//
//private:
//	A(){};
//	A(const A&){};
//
//};
//
//int main()
//{
//	A a;//报错
//	return 0;
//
//}


//class A
//{
//public:
//	A()
//	{
//
//	}
//};
//
//int main()
//{
//	
//	return 0;
//}


//创建一个只可以在栈上面对象

//class A{
//public:
//	A(){};
//private:
//	
//	void* operator new(size_t size);
//	void operator delete(void* p);
//};
//
//int main()
//{
//	A a;
//}


//单例模式中的恶汉
//class hungry
//{
//public:
//	hungry create()
//	{
//		return m_hungry;
//	}
//private:
//	static hungry m_hungry;
//	hungry(){};
//	hungry(const hungry&);
//	hungry& operator=(const hungry&);
//};

//饱汉模式

//class single
//{
//public:
//	single* create()
//	{
//		if (m_single == nullptr)
//		{
//			m_mux.lock();
//			if (m_single == nullptr)
//			{
//				m_single = new single;
//			}
//			m_mux.unlock();
//		}
//		return m_single;
//	}
//
//	class trash
//	{
//		~trash()
//		{
//			if (m_single)
//			{
//				delete(m_single);
//				m_single == nullptr;
//			}
//		}
//	};
//
//private:
//	static single* m_single;
//	static mutex m_mux;
//	single(){}
//	single(const single&);
//};
//
//
//single* single::m_single;
//mutex single::m_mux;



//验证
//class hungry
//{
//public:
//	static hungry* create()
//	{
//		m_hungry = new hungry;
//		return m_hungry;
//	}
//private:
//	hungry(){}
//	hungry(const hungry&);
//	static hungry* m_hungry;
//};
//
//int main()
//{
//	
//	return 0;
//}

//struct S
//{
//	char a;
//	short b;
//};
//class A
//{
//	void print()
//	{
//
//	}
//	char _a;
//};
//
//class B
//{
//	void print()
//	{}
//};
//
//class C
//{
//
//};
//
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C )<< endl;
//	cout << sizeof(S) << endl;
//
//	system("pause");
//	return 0;
//}



void print()
{
	cout <<  << endl;
}
class A
{
private:
	int _a;
	int _b;
	friend void print();
};

int main()
{
	return 0;
}

int* a;
int* p = (void*)a;