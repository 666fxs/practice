//#include<iostream>
//using namespace std;
//
//
//class A
//{
//public:
//	/*A()
//	{
//		_a = 1;
//		_b = 2;
//	}
//	A(int a = 4, int b = 3)
//	{
//		_a = a;
//		_b = b;
//	}*/
//	A(int a)
//	{
//
//	}
//	int _a;
//	int _b;
//	int _c;
//
//};
//int main()
//{
//	A a;
//	cout << a._a << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int b = 2;
//	int c = 3;
//
//
//};
//
//class B :protected A
//{
//
//};
//
//int main()
//{
//
//}


//#include<iostream>
//using namespace std;
//
//class Men
//{
//     
//public:
//	void print()
//	{
//		cout << "father" << endl;
//	}
//	void print(int a)
//	{
//		cout << "fatherint A" << endl;
//	}
//};
//
//class Student:public Men
//{
//public:
//	void print()
//	{
//		cout << "×ÓÀà" << endl;
//	}
//};
//int main()
//{
//
//	Men men;
//	Student stu;
//	int a = 10;
//	men.print();
//	men.print(a);
//	stu.Men::print(a);
//	system("pause");
//	return 0;
//}




#include<iostream>
using namespace std;


//class person
//{
//public:
//	void print()
//	{
//		cout << "person" << endl;
//	}
//};
//
//
//class man:public person
//{
//public:
//
//	void print()
//	{
//		cout << "man" << endl;
//	}
//};
//
//class woman :public person
//{
//public:
//	void print()
//	{
//		cout << "women" << endl;
//	}
//};
//
//
//
//int main()
//{
//	person p;
//	p.print();
//	person* q = new man;
//	q->print();
//	person* w = new woman;
//	w->print();
//	system("pause");
//	return 0;
//}
class person
{
public:
	 virtual void print()
	{
		cout << "person" << endl;
	}
};


class man :public person
{
public:

	void print()
	{
		cout << "man" << endl;
	}
};

class woman :public person
{
public:
	void print()
	{
		cout << "women" << endl;
	}
};



int main()
{
	person p;
	p.print();
	person* q = new man;
	q->print();
	person* w = new woman;
	w->print();
	system("pause");
	return 0;
}