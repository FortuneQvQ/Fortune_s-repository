#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int *top=stack;

void push();
int pop(void);
int peek();
bool is_empty();
bool is_full();
void clear();

int main(void)
{
	
}

void push(int a)
{
	if(is_full())
	{
		printf("Stack is full!");
		exit(EXIT_FAILURE);
	}
	*top++=a;
}

int pop(void)
{
	if(is_empty())
	{
		printf("Stack is empty!");
		exit(EXIT_FAILURE);
	}
	return *--top;
}

int peek(void)
{
	if(is_empty())
	{
		printf("Stack is empty!");
	}
	return *(top-1);
}

bool is_empty(void)
{
	return top==&stack[0];
}

bool is_full(void)
{
	return top==&stack[MAX_SIZE];
}

void clear(void)
{
	top=stack;
}
