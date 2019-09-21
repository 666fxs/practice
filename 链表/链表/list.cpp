#include"list.h"
int main()
{
	List list;
	ListInit(&list);
	ListPush_head(&list, 100);
	ListPush_head(&list, 200);
	ListPush_head(&list, 300);
	ListPush_head(&list, 400);
	ListPush_head(&list, 500);
	ListPush_head(&list, 600);
	ListPush_back(&list, 700);
	//ListPop_back(&list);
	Print(&list);
	system("pause");
	return 0;
}