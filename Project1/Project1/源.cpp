#include<stdio.h>
int main(){
	int a[5] = { 1, 2, 3, 4, 5 }; int *p = (int*)(&a+1); printf("%d", *(p - 2));
	int(*q)[5] = &a;
	printf("%d", *q);
	getchar();
	return 0;
}