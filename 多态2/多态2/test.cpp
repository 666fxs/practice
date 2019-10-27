#include<iostream>
using namespace std;
//class people
//{
//public:
//	virtual void eat() = 0;
//};
//
//class man :public people
//{
//public:
//	/*void eat()
//	{
//		cout << "男人爱喝酒" << endl;
//	}*/
//};
//
//class woman :public people
//{
//public:
//	void eat()
//	{
//		cout << "女人爱打扮" << endl;
//	}
//};
//int main()
//{
//	//people p; 这个就不可以实现，因为声明了纯虚函数的类不会被实例化
//	//people* p = new man;  这个就不可以，因为在子类中没有完成该虚函数的重写
//	people * p = new woman;
//	p->eat();
//	system("pause");
//	return 0;
//}


class people
{
public:
	people()
	{
		cout << "people的构造函数" << endl;
	}
	virtual ~people()
	{
		cout << "peopel的xigou函数" << endl;
	}
	virtual void eat()
	{
		cout << "人类都喜欢做不同的事" << endl;
	}
};

class man :public people
{
public:
	man()
	{
		cout << "man的构造函数" << endl;
	}
	~man()
	{
		cout << "man的xigou函数" << endl;
	}
	void eat()
	{
	cout << "男人爱喝酒" << endl;
	}
};

class woman :public people
{
public:
	woman()
	{
		cout << "woman的构造函数" << endl;
	}
	~woman()
	{
		cout << "woman的xigou函数" << endl;
	}
	void eat()
	{
		cout << "女人爱打扮" << endl;
	}
};
int main()
{
	
	people* p = new man;
	delete p;
	
	system("pause");
	return 0;
}