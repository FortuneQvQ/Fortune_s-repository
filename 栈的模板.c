#include <stdio.h>
#include <stdbool.h> /* C99 only */ 
#include <stdlib.h>
#define STACK_SIZE 100 
/* external variables */ 
char contents[STACK_SIZE]; 
int top = 0; 

//清空栈
void make_empty(void) 
{ 
 top = 0; 
} 

bool is_empty(void) 
{ 
 return top == 0; 
} 

bool is_full(void) 
{ 
 return top == STACK_SIZE; 
} 

//栈溢出
void stack_overflow(void)
{
    printf("Error: Stack overflow\n");
    exit(EXIT_FAILURE);
}

//栈空
void stack_underflow(void)
{
    printf("Error: Stack underflow\n");
    exit(EXIT_FAILURE);
}

//向栈中填充
void push(char i) 
{ 
 if (is_full()) 
 stack_overflow(); 
 else 
 {
 	contents[top++] = i; 
 }
} 

///从栈中提取
char pop(void) 
{ 
 if (is_empty()) 
 stack_underflow(); 
 else 
 return contents [--top]; 
}

int main(void)
{
	
}

