#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<assert.h>

typedef struct ListNode
{
	int value;
	//单链表
	struct ListNode* next;
}ListNode;

typedef struct List
{
	ListNode*head;

}List;

	 
 //初始化
void ListInit(List* list)
{
	list->head = NULL;
}

//销毁
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


//插入
//1、头插
void ListPush_head(List* list,int value)
{
	assert(list != NULL);
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	assert(node);
	node->value = value;
	node->next = list->head;
	list->head = node;

}

//头删
void ListPop_head(List* list)
{
	if (list->head == NULL)
	{
		std::cout << "没有节点可以删除了：" << std::endl;
	}
	else
	{
		ListNode* cur = list->head;
		list->head = list->head->next;
		free(cur);
		cur = NULL;
		
	}
}

// 尾插
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

	//// cur 就是最后一个结点
	//ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	//cur->next = node;
	//node->value = value;
	node->next = NULL;
}


//尾删
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


//指定位置插入
void ListInsertAfter(ListNode* pos, int value)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->next = pos->next;
	pos->next = node;
	node->value = value;

}








//查找
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


//打印
void Print(List* list)
{
	//assert(!list);
	for (ListNode *cur = list->head; cur != NULL; cur = cur->next) {
		printf("%d --> ", cur->value);
	}
}