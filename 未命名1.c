#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_DIGITS 10
//这个程序允许你输入最多10位数字，然后程序会将数字用七段码输出。
char number[10][3][4]={{{' ','_',' ',' '},{'|',' ','|',' '},{'|','_','|',' '}},{{' ',' ',' ',' '},{'|',' ',' ',' '},{'|',' ',' ',' '}},{{' ','_',' ',' '},{' ','_','|',' '},{'|','_',' ',' '}},{{' ','_',' ',' '},{' ','_','|',' '},{' ','_','|',' '}},{{' ',' ',' ',' '},{'|','_','|',' '},{' ',' ','|',' '}},{{' ','_',' ',' '},{'|','_',' ',' '},{' ','_','|',' '}},{{' ','_',' ',' '},{'|','_',' ',' '},{'|','_','|',' '}},{{' ','_',' ',' '},{' ',' ','|',' '},{' ',' ','|',' '}},{{' ','_',' ',' '},{'|','_','|',' '},{'|','_','|',' '}},{{' ','_',' ',' '},{'|','_','|',' '},{' ','_','|',' '}}};
char digits[3][MAX_DIGITS*4];

void clear_digits_array(void);
void process_digit(int digit,int position);
void refer(int digit,int position);
void print_digits_array(void);

int main(void)
{
	clear_digits_array();
	int input[MAX_DIGITS]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	char temp;
	for(int i=0;i<MAX_DIGITS;i++)
	{
		temp=getchar();
		switch(temp)
		{
			case '0':
				input[i]=0;
				break;
			case '1':
				input[i]=1;
				break;
			case '2':
				input[i]=2;
				break;
			case '3':
				input[i]=3;
				break;
			case '4':
				input[i]=4;
				break;
			case '5':
				input[i]=5;
				break;
			case '6':
				input[i]=6;
				break;
			case '7':
				input[i]=7;
				break;
			case '8':
				input[i]=8;
				break;
			case '9':
				input[i]=9;	
				break;
			case '\n':
				goto next;
			default:
				break;										
		}				
	}
next:
	for(int i=0;i<MAX_DIGITS;i++)
	{
		if(input[i]==-1)
		{
			break;
		}
		process_digit(input[i],i);
	}
	print_digits_array();
}

void clear_digits_array(void)
{
	for(int i=0;i<MAX_DIGITS*4;i++)
	{
		for(int j=0;j<3;j++)
		{
			digits[j][i]=0;
		}
	}
}

void process_digit(int digit,int position)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			digits[i][4*position+j]=number[digit][i][j];
		}
	}
}

void print_digits_array(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<MAX_DIGITS*4;j++)
		{
			printf("%c",digits[i][j]);
		}
		printf("\n");
	}
}
