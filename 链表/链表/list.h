#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<assert.h>

typedef struct ListNode
{
	int value;
	//������
	struct ListNode* next;
}ListNode;

typedef struct List
{
	ListNode*head;

}List;

	 
 //��ʼ��
void ListInit(List* list)
{
	list->head = NULL;
}

//����
void ListDestory(List* list)
{
	if (list->head == NULL)
	{
		return;
	}
	else
	{
		ListNode* cur;
		ListNode* next;
		cur = list->head;
		while (cur != NULL)
		{
			next = cur->next;
			free(cur);
			cur = next;
		}

	}
	list->head = NULL;
}


//����
//1��ͷ��
void ListPush_head(List* list,int value)
{
	assert(list != NULL);
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	assert(node);
	node->value = value;
	node->next = list->head;
	list->head = node;

}

//ͷɾ
void ListPop_head(List* list)
{
	if (list->head == NULL)
	{
		std::cout << "û�нڵ����ɾ���ˣ�" << std::endl;
	}
	else
	{
		ListNode* cur = list->head;
		list->head = list->head->next;
		free(cur);
		cur = NULL;
		
	}
}

// β��
void ListPush_back(List* list, int value)
{
	ListNode* cur = list->head;
	while (cur->next!=NULL)
	{
		cur = cur->next;
	}
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	cur->next = node;
	node->value = value;
	
	//ListNode* cur;
	//for (cur = list->head; cur->next != NULL; cur = cur->next) {
	//}

	//// cur �������һ�����
	//ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	//cur->next = node;
	//node->value = value;
	node->next = NULL;
}


//βɾ
void ListPop_back(List* list){
	ListNode* pcur = list->head;
	ListNode* cur  = pcur->next;
	while (cur->next != NULL)
	{
		cur = cur->next;
		pcur = pcur->next;
	}
	free(cur);
	cur = NULL;
	pcur->next = NULL;
}


//ָ��λ�ò���
void ListInsertAfter(ListNode* pos, int value)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->next = pos->next;
	pos->next = node;
	node->value = value;

}








//����
ListNode* ListFind(List* list, int value)
{
	ListNode* cur = list->head;
	while (cur != NULL)
	{
		if (cur->value = value)
		{
			return cur;
		}
	}
}


//��ӡ
void Print(List* list)
{
	//assert(!list);
	for (ListNode *cur = list->head; cur != NULL; cur = cur->next) {
		printf("%d --> ", cur->value);
	}
}