#include<iostream>
using namespace std;

//class people
//{
//public:
//	void print()
//	{
//		cout << "people" << endl;
//	}
//};
//
//
//class man:public people
//{
//public:
//	 void print()
//	{
//		cout << "man" << endl;
//	}
//
//
//};
//
//
//class woman :public people
//{
//     void print()
//	{
//		cout << "woman" << endl;
//	}
//};
//int main()
//{
//
//
//	people* p = new man;
//	people* p2 = new woman;
//	cout << typeid(*p).name()<< endl;
//	cout << typeid(*p2).name() << endl;
//
//	system("pause");
//	return 0;
//}

//class people
//{
//public:
//	int _name;
//	int _id;
//};
//
//class man: virtual public people
//{
//public:
//
//	int idnum;
//};
//
//class woman : virtual public people
//{
//public:
//	int card;
//};
//
//
//class child :public man ,public woman
//{
//	int c
//};
//
//
//int main()
//{
//	child c;
//	c.man::_name = 10;
//	c.woman::_name = 11;
//
	
	
	/*system("pause");
	return 0;
}
*/




//class A{
//
//public:
//	int _a = 1;
//};
//
//class B : virtual public A{
//
//public:
//	int _b = 2;
//};
//
//class C :virtual public A{
//public:
//
//	int _c = 3;
//};
//
//class D : public B, public C {
//public:
//
//	int _d = 4;
//};
//
//int main(){
//	D d1;
//	
//
//}


//#include<iostream>
//#include<algorithm>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	int w, h;
//	cin >> h >> w;
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	vector<vector<int>> v;
//	
//	for (int i = 0; i<h; i++)
//	{
//		for (int j = 0; j<w; j++)
//		{
//			if (v[i][j] == 0)
//			{
//				count++;
//				// 标记不能放蛋糕的位置 
//				if ((i + 2) < w)
//				{
//					v[i + 2][j] = 1;
//
//				}
//				if ((j + 2) < h)
//				{
//					v[i][j + 2] = 1;
//
//				}
//			}
//		}
//		cout << count << endl;
//		return 0;
//	}
//}
