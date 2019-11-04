

//T func(T a, T2 b)
//{
//	return a + b;
//}
//
//
//int main()
//{
//	func(1, 2.1);
//	return 0;
//}


//int func(T a)
//{
//	return a;
//}
//
//int main()
//{
//	int ret = func<double,1,3>(2);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//
//}


//1\、类的模板函数
//template<class T>
//T func(T a)
//{
//	cout << a << endl;
//	return a;
//}
//int main()
//{
//	int a = 3;
//	func(a);
//	system("pause");
//	return 0;
//}

//template<class T,class F>
//F func(T a, F b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	double b = 12.13;
//	int ret = func(a,b);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//非类型模板参数
//template<class T,int a,int b>
//T func(T c)
//{
//	return c+a+b;
//}
//
//int main()
//{
//	int c = 1;
//	int ret = func<int,1,2>(c);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
//
//template<class T,int a,int b>
//T func()
//{
//	return a + b;
//}

//
//template<class T>
//
//void func(T a)
//{
//	cout << a << endl;
//}
//int main()
//{
//	int a = 10;
//	func(a);
//	system("pause");
//	return 0;
//}


//特殊的模板
//template<unsigned L1,unsigned L2>
//int func(const char(&p)[L1], const char(*q)[L2])
//{
//	return strcmp(p, q);
//}
//
//int main()
//{
//	int ret = func<7,6>("test12", "test1");
//	cout << ret << endl;
//	return 0;
//}