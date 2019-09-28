#include"list.h"
int main()
{
	Seqlist seqlist;
	SeqlistInit(&seqlist, 10);
    SeqlistPush_back(&seqlist, 1);
	SeqlistPush_back(&seqlist, 2);
	SeqlistPush_back(&seqlist, 3);
	SeqlistPush_back(&seqlist, 4);
	SeqlistPush_back(&seqlist, 5);
	SeqlistPush_back(&seqlist, 6);
	SeqlistPush_back(&seqlist, 7);
	SeqlistPush_back(&seqlist, 8);
	SeqlistPush_back(&seqlist, 9);
	std::cout << "old=>"<<seqlist.capacity << std::endl;
	SeqlistPush_back(&seqlist, 9);
	SeqlistPop_back(&seqlist);
	SeqlistPush_head(&seqlist, 100);
	SeqlistPop_head(&seqlist);
	Seqlistinsert(&seqlist, 2, 10000);
	SeqlistDelete(&seqlist, 2);
	std::cout << "new=>" << seqlist.capacity << std::endl;
	print(&seqlist);
	SeqlistFind(&seqlist, 1);
	system("pause");
	return 0;
}