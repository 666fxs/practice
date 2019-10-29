//#include<iostream>
//using namespace std;
//int fib(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	return fib(n) + fib(n - 1);
//}
//int main()
//{
//	
//	int n;//输入的那个数
//	int i = 0;//记录第几个菲薄纳妾数
//	cin >> n;
//	int oldcz = n;//记录两个的差值
//	for (int i=0;;i++)
//	{
//		int newcz = abs(fib(i) - n);
//		
//		if (newcz > oldcz)
//		{
//			cout << oldcz << endl;
//			break;
//		}
//		else
//		{
//			oldcz = newcz;
//		}
//		
//	}
//	system("pause");
//	return 0;
//}

//#include<string>
//#include<iostream>
//using namespace std;
//bool chkParenthesis(string A) {
//	// write code here
//	int L;
//	int size = A.size() - 1;
//	for (int i = 0; i<=size; i++)
//	{
//		if (A[0] != '(')
//		{
//			return false;
//		}
//		if (A[i] == '(')
//		{
//			L++;
//		}
//		if (A[i] == ')')
//		{
//			L--;
//			if (L < 0)
//			{
//				return false;
//			}
//		}
//		if (A[i] != '('&&A[i] != ')')
//		{
//			if (L <= 0)
//			{
//				return false;
//			}
//		}
//	}
//	if (L == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	bool ret = chkParenthesis(s);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		int cnt = 0;
		for (int i = 0; i<n; i++){
			if (A[i] == '(')
				cnt++;
			else if (A[i] == ')'){
				if (cnt <= 0)
					return false;
				cnt--;
			}
			else{
				return false;
			}
		}
		return true;
	}
};