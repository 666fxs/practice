//#define max(a,b)   (((a)+(b))+(((((a)-(b))>>31)&1)?(~((a)-(b))+1):((a)-(b))))/2 
//#define max(a,b) (a>b)?a:b
int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	int j = 2;
	printf("%d", max(++i, 1));
	system("pause");
	return 0;
}