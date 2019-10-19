
#include <iostream>

using namespace std;


class Shape//形状

{

public:

	 void DrawSelf()//绘制自己

	{

		cout << "我是一个什么也绘不出的图形" << endl;

	}

};

class Polygon :public Shape//多边形

{

public:

	void DrawSelf()   //绘制自己

	{

		cout << "连接各顶点" << endl;

	}

};



class Circ :public Shape//圆

{

public:

	void DrawSelf()   //绘制自己

	{

		cout << "以圆心和半径为依据画弧" << endl;

	}

};


void OutputShape(Shape& arg)//专门负责调用形状的绘制自己的函数

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