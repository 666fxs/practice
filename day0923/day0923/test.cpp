//#include <stdio.h> 
//#include<stdlib.h>
//int main() 
//{ 
//	char a[10]={ '1','2','3','4','5','6','7','8','9','10'},*p; 
//	int i; 
//	i=8;
//	p=a+i; 
//	printf("%s\n",p-3); 
//	system("pause");
//	return 0;
//}
////此时的打印结果会出现烫烫烫，因为%s以\0结束，因为数组全部赋值，就会出现数组访问越界

//#include<iostream>
//using namespace std;
//int func() 
//{
//int j, k = 0;
//for ( j = -1; j =2; j++)
//{
//	++k; 
//} 
//return k;
//}int main()
//{ 
//	cout << (func()) << endl;;
//	system("pause");
//	return 0;
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string cur, str, res;
//	cin >> str;
//	for (int i = 0; i<str.size(); i++)
//	{
//		if (str[i] >= '0'&&str[i] <= '9')
//		{
//			cur += str[i];
//		}
//		else{
//			//判断res和cur哪个长
//			if (res.size()<cur.size())
//			{
//				res = cur;
//			}
//			else{ cur.clear(); }
//
//
//		}
//	}
//	if (res.size < cur.size())
//	{
//		res = cur;
//	}
//	cout << res << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int count = 0;
//	int n = 0;
//	cin >> n;
//	vector<int> v1(n);
//	for (int i = 0; i<n; i++)
//	{
//		cin >> v1[i];
//	}
//	for (int j = 0; j<n; j++)
//	{
//		if (v1[j] >= n / 2)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

#include<iostream>
#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
	int n; vector <int> vec;
	while (cin >> n)
		vec.push_back(n);
	sort(vec.begin(), vec.end());
	cout << vec[vec.size() / 2 - 1] << endl;
	return 0;
}