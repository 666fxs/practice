
#include <iostream>

using namespace std;


class Shape//��״

{

public:

	 void DrawSelf()//�����Լ�

	{

		cout << "����һ��ʲôҲ�治����ͼ��" << endl;

	}

};

class Polygon :public Shape//�����

{

public:

	void DrawSelf()   //�����Լ�

	{

		cout << "���Ӹ�����" << endl;

	}

};



class Circ :public Shape//Բ

{

public:

	void DrawSelf()   //�����Լ�

	{

		cout << "��Բ�ĺͰ뾶Ϊ���ݻ���" << endl;

	}

};


void OutputShape(Shape& arg)//ר�Ÿ��������״�Ļ����Լ��ĺ���

{

	arg.DrawSelf();

}


int main()

{

	Polygon shape1;

	Circ shape2;

	//Shape temp;

	//temp=shape1;

	//temp.must(shape1);

	OutputShape(shape1);

	OutputShape(shape2);

}


//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	int id = 1;
//	void print()
//	{
//		cout << id << endl;
//	}
//};
//class student :public person
//{
//public:
//	int id = 2;
//	void print()
//	{
//		cout << id << endl;
//	}
//};
//
//int main()
//{
//	student s;
//	cout << s.id << endl;
//	s.print();
//	person p;
//	cout << p.id << endl;
//	p.print();
//	return 0;
//}