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
//		cout << "���˰��Ⱦ�" << endl;
//	}*/
//};
//
//class woman :public people
//{
//public:
//	void eat()
//	{
//		cout << "Ů�˰����" << endl;
//	}
//};
//int main()
//{
//	//people p; ����Ͳ�����ʵ�֣���Ϊ�����˴��麯�����಻�ᱻʵ����
//	//people* p = new man;  ����Ͳ����ԣ���Ϊ��������û����ɸ��麯������д
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
		cout << "people�Ĺ��캯��" << endl;
	}
	virtual ~people()
	{
		cout << "peopel��xigou����" << endl;
	}
	virtual void eat()
	{
		cout << "���඼ϲ������ͬ����" << endl;
	}
};

class man :public people
{
public:
	man()
	{
		cout << "man�Ĺ��캯��" << endl;
	}
	~man()
	{
		cout << "man��xigou����" << endl;
	}
	void eat()
	{
	cout << "���˰��Ⱦ�" << endl;
	}
};

class woman :public people
{
public:
	woman()
	{
		cout << "woman�Ĺ��캯��" << endl;
	}
	~woman()
	{
		cout << "woman��xigou����" << endl;
	}
	void eat()
	{
		cout << "Ů�˰����" << endl;
	}
};
int main()
{
	
	people* p = new man;
	delete p;
	
	system("pause");
	return 0;
}