#include<iostream>
#include<string>
using namespace std;


class A
{
public:
	int count = 0;
	A()
	{
		cout << "A�Ĺ��캯��" << endl;
		count++;
	}
	virtual ~A()
	{
		cout << "A����������" << endl;
		count++;
	}
	A(const A& a)
	{
		cout << "A�Ŀ������캯��" << endl;
	}
	A& operator=(const A& a)
	{
		cout << "��ֵ" << endl;
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
