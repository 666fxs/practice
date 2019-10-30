//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int min(int a, int b)
//{
//	return a>b ? a : b;
//}
//bool length(vector<string> v1)
//{
//	if (v1.empty())
//	{
//		return false;
//	}
//	else if (v1.size() == 1)
//	{
//		return true;
//	}
//	for (unsigned long i = 0; i<v1.size() - 1; i++)
//	{
//		if (v1[i].size() >= v1[i + 1].size())
//		{
//			return false;
//		}
//
//	}
//	return true;
//
//}
//
//
//bool big(vector<string> v2)
//{
//	if (v2.empty())
//	{
//		return false;
//	}
//	else if (v2.size() == 1)
//	{
//		return true;
//	}
//	for (unsigned long i = 0; i<v2.size() - 1; i++)
//	{
//		if (v2[i].size() == v2[i + 1].size())
//		{
//			if (v2[i].size() == 1)
//			{
//				return v2[i]>v2[i + 1] ? 0 : 1;
//			}
//			for (unsigned long j = 0; j<v2[i].size() - 1; j++)
//			{
//				if (v2[i]>v2[i + 1])
//				{
//					return false;
//				}
//			}
//		}
//		else{
//			if (v2[i].size() == 1)
//			{
//				return v2[i]>v2[i + 1] ? 0 : 1;
//			}
//			for (unsigned long j = 0; j<min(v2[i].size(), v2[i + 1].size()) - 1; j++)
//			{
//				if (v2[j]>v2[j + 1])
//				{
//					return false;
//				}
//			}
//			return true;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	bool ret1, ret2;
//	vector<string> v(n);
//	for (int i = 0; i<n; i++)
//	{
//		cin >> v[i];
//	}
//	ret1 = length(v);
//	ret2 = big(v);
//	if (ret1 == true && ret2 == false)
//	{
//		cout << "lengths" << endl;
//	}
//	else if (ret1 == false && ret2 == true)
//	{
//		cout << "lexicographically" << endl;
//	}
//	else if (ret1 == true && ret2 == true)
//	{
//		cout << "both" << endl;
//	}
//	else{
//		cout << "none" << endl;
//	}
//	return 0;
//}