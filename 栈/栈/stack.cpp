#include<iostream>
typedef struct Stack
{
	int top;
	int* array;
	int capacity;

}Stack;


//初始化栈
void StackInit(Stack* stack,int capacity)
{
	stack->top = 0;
	stack->capacity = capacity;
	stack->array = (int*)malloc(capacity*sizeof(int));
}

//销毁
void StackInit(Stack* stack)
{
	free(stack->array);
	stack->array = NULL;
}


//增容操作
void CheckCapacity(Stack* stack)
{
	if (stack->top >= stack->capacity)
	{
		int* newstack = (int*)malloc(sizeof(int)*(stack->capacity *= 2));
		int* oldstack = stack->array;
		for (int i = 0; i < stack->top; i++)
		{
			newstack[i] = stack->array[i];
		}
		stack->array = newstack;
		free(oldstack);
		oldstack = NULL;
	}
}

//插入
void StackPush_back(Stack* stack,int value)
{
	CheckCapacity(stack);
	stack->array[stack->top++] = value;

}

//删除
void StackPop_back(Stack* stack)
{
	stack->top--;
}


void Print(Stack* stack)
{
	for (int i = 0; i < stack->top; i++)
	{
		std::cout << stack->array[i] << "->";
	}
	std::cout << std::endl;
}


int main()
{
	Stack stack;
	StackInit(&stack, 100);
	StackPush_back(&stack, 1);
	StackPush_back(&stack, 2);
	StackPush_back(&stack, 3);
	StackPush_back(&stack, 4);
	Print(&stack);
	system("pause");

	return 0;
}