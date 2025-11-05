#include <stdio.h>
#include <stdbool.h> /* C99 only */ 
#include <stdlib.h>

#define STACK_SIZE 100

int contents[100];
int top=0;

void make_empty(void);     // 清空栈
bool is_empty(void);       // 检查栈是否为空
bool is_full(void);        // 检查栈是否已满
void push(int number);     // 压栈操作
int pop(void);             // 弹栈操作
int peek(void);			   // 查看栈顶元素（不弹出）

int main(void)
{
	
}
void make_empty(void)
{
	top=0;
}

bool is_empty(void) 
{
	return top==0;
}

bool is_full(void)
{
	return top==STACK_SIZE;
}

void push(int number)
{
	if(is_full())
	{
		printf("栈已满，无法压入新元素!\n");
		exit(EXIT_FAILURE);
	}
	contents[top++]=number;
}

int pop(void)
{
	if(is_empty())
	{
		printf("栈已空，无法弹出数据!\n");
		exit(EXIT_FAILURE);
	}
	return contents[--top];
}

int peek(void)
{
	if(is_empty())
	{
		printf("栈是空的!\n");
		exit(EXIT_FAILURE);
	}
	return contents[top-1];
}
