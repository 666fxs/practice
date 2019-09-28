#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
typedef struct Seqlist
{
	int* array ;
	int size ;
	int capacity;
}Seqlist;

//初始化操作
void SeqlistInit(Seqlist* seqlist, int capacity)
{
	seqlist->size = 0;
	seqlist->capacity = capacity;
	seqlist->array = (int*)malloc(sizeof(int)*capacity);
}

//销毁操作
void SeqlistDestory(Seqlist* seqlist)
{
	free(seqlist->array);
	seqlist->array = NULL;
}
//检查容量，不够增容
void CheckCapacity(Seqlist* seqlist)
{
	if (seqlist->size >= seqlist->capacity-1)
	{
		//先增容
		int* newarray = (int*)malloc(sizeof(int)*(seqlist->capacity *= 2));
		//将old里面的内容复制到新的里面
		for (int i = 0; i < seqlist->size; i++)
		{
			newarray[i] = seqlist->array[i];
		}
		free(seqlist->array);
		seqlist->array = newarray;

	}
}
//尾插入操作
void SeqlistPush_back(Seqlist* seqlist,int value)
{
	CheckCapacity(seqlist);
	seqlist->array[seqlist->size] = value;
    seqlist->size++;

}

//尾删
void SeqlistPop_back(Seqlist* seqlist)
{
	seqlist->size--;

}

//头插
void SeqlistPush_head(Seqlist* seqlist, int value)
{
	CheckCapacity(seqlist);
	for (int i = seqlist->size-1; i>=0; i--)
	{
		seqlist->array[i+1] = seqlist->array[i];
	}
	seqlist->size++;
	seqlist->array[0] = value;

}
//头删
void SeqlistPop_head(Seqlist* seqlist)
{
	for (int i = 1; i < seqlist->size; i++)
	{
		seqlist->array[i - 1] = seqlist->array[i];
	}
	seqlist->size--;
}

//任意位置插入
void Seqlistinsert(Seqlist* seqlist,int loca,int value)
{
	CheckCapacity(seqlist);
	if (loca <seqlist->size)
	{
		for (int i = seqlist->size-1; i >=loca; i--)
		{
			seqlist->array[i + 1] = seqlist->array[i];
		}
		seqlist->array[loca] = value;
		seqlist->size++;
	}
	else
	{
		SeqlistPush_back(seqlist, value);
	}
}
//任意位置删除
void SeqlistDelete(Seqlist* seqlist, int loca)
{
	for (int i = loca+1; i < seqlist->size; i++)
	{
		seqlist->array[i-1] = seqlist->array[i];
	}
	seqlist->size--;
}

//查找函数,找到返回下标，找不到返回0
void SeqlistFind(Seqlist* seqlist, int value)
{
	int count = 0;
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] == value)
		{
			std::cout << "下标：" << i;
			count++;
		}
	}
	if (count == 0)
	{
		std::cout << "<=没有该数字=>";
	}
}

//打印
void print(Seqlist* seqlist)
{
	for (int i = 0; i < seqlist->size; i++)
	{
		std::cout << seqlist->array[i] <<"->";
	}
}

