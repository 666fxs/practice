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

//��ʼ������
void SeqlistInit(Seqlist* seqlist, int capacity)
{
	seqlist->size = 0;
	seqlist->capacity = capacity;
	seqlist->array = (int*)malloc(sizeof(int)*capacity);
}

//���ٲ���
void SeqlistDestory(Seqlist* seqlist)
{
	free(seqlist->array);
	seqlist->array = NULL;
}
//�����������������
void CheckCapacity(Seqlist* seqlist)
{
	if (seqlist->size >= seqlist->capacity-1)
	{
		//������
		int* newarray = (int*)malloc(sizeof(int)*(seqlist->capacity *= 2));
		//��old��������ݸ��Ƶ��µ�����
		for (int i = 0; i < seqlist->size; i++)
		{
			newarray[i] = seqlist->array[i];
		}
		free(seqlist->array);
		seqlist->array = newarray;

	}
}
//β�������
void SeqlistPush_back(Seqlist* seqlist,int value)
{
	CheckCapacity(seqlist);
	seqlist->array[seqlist->size] = value;
    seqlist->size++;

}

//βɾ
void SeqlistPop_back(Seqlist* seqlist)
{
	seqlist->size--;

}

//ͷ��
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
//ͷɾ
void SeqlistPop_head(Seqlist* seqlist)
{
	for (int i = 1; i < seqlist->size; i++)
	{
		seqlist->array[i - 1] = seqlist->array[i];
	}
	seqlist->size--;
}

//����λ�ò���
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
//����λ��ɾ��
void SeqlistDelete(Seqlist* seqlist, int loca)
{
	for (int i = loca+1; i < seqlist->size; i++)
	{
		seqlist->array[i-1] = seqlist->array[i];
	}
	seqlist->size--;
}

//���Һ���,�ҵ������±꣬�Ҳ�������0
void SeqlistFind(Seqlist* seqlist, int value)
{
	int count = 0;
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] == value)
		{
			std::cout << "�±꣺" << i;
			count++;
		}
	}
	if (count == 0)
	{
		std::cout << "<=û�и�����=>";
	}
}

//��ӡ
void print(Seqlist* seqlist)
{
	for (int i = 0; i < seqlist->size; i++)
	{
		std::cout << seqlist->array[i] <<"->";
	}
}

