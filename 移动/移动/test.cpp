#include<iostream>
#include<string>
using namespace std;


class A
{
public:
	int count = 0;
	A()
	{
		cout << "A的构造函数" << endl;
		count++;
	}
	virtual ~A()
	{
		cout << "A的析构函数" << endl;
		count++;
	}
	A(const A& a)
	{
		cout << "A的拷贝构造函数" << endl;
	}
	A& operator=(const A& a)
	{
		cout << "赋值" << endl;
		return *this;
	}
	int _a;
	int _b;
};



A copy()
{
	A a;
	a._b = 10;

	return a;
}

int main()
{


	

	A b;
	b = copy();
	
	system("pause");
	return 0;
}
