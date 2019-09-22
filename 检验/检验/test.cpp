#include<iostream>
using namespace std;
//int main()
//{
//	//char* p1 = "abs";
//	//char* p2 = "abs";
//	////不可以被修改
//	////char p = "123";
//	////char p[] = "123";
//	//return 0;
//
//	/*int a[] = { 1, 2, 3, 4 };
//	int *b = a;
//	*b += 2;
//	*(b + 2) = 2;
//	b++; */
//
//
//	system("pause");
//	return 0;
//}

//class Sample{ 
//public:
//	Sample(int x){ 
//		p = &x;
//	}
//	~Sample(){
//		if (p) delete p;
//	}
//	int show(){
//		return *p;
//	}
//private: 
//	int*p;
//}; 
//int main(){
//	
//	Sample S(5);
//	cout << S.show() << endl;
//	system("pause");
//	return 0;
//}

//排序子序列问题
//#include<vector>
//
//int main()
//{
//	int count = 1;
//	int n;
//	cin >> n;
//	vector<int> v1(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v1[i];
//	}
//	for (int j = 1; j < n-1; j++)
//	{
//		if (v1[j] <= v1[j - 1] && v1[j] < v1[j + 1] || v1[j] >= v1[j - 1] && v1[j] >= v1[j + 1])
//		{
//			count++;
//			j += 2;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//倒置字符串

//#include<string>
//#include<algorithm> 
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s.begin(), s.end());
//	auto start = s.begin();
//
//	while (start != s.end())
//	{
//		auto end = start;
//		while(end != s.end()&& *end != ' ')
//		{
//			end++;
//		}
//		reverse(start, end);
//		
//		if (end == s.end())
//		{
//			start = end;
//		}
//		else{
//			end++;
//			start = end;
//		}
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}