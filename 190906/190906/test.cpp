#include<iostream>
#include<vector>
using namespace std;


int main()
{
	//�����ҵ����Ǹ������ұߴ��ڱ���С�ľ��ǽ�������
	int n;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i];
	}
	
	//����������ģ�Ҫ���ұ���С��С
	int max, min;
	int i = 0 ;
	for (int i = 0; i < n; i++)
	{
		for (int m = 0; m <= i; m++)
		{
			max = v1[0];
			if (v1[m]>max)
			{
				max = v1[m];
			}
		}
		for (int j = i + 1; j < n; j++)
		{
			min = v1[i + 1];
			if (min>v1[j])
			{
				min = v1[j];
			}
		}
		if (min > max)
		{  
			cout<<i+1<<endl;
			system("pause");
			return 0;
		}
	}
	if (i >= n)
	{
		cout << "0" << endl;
	}
	system("pause");
	return 0;
}