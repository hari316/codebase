#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void duplicate(char c[])
{
	int i = 0, j = 0, k = 0,flag=0;
	char *duplicate_str=(char*)malloc(sizeof(c));
	char *start_holder = duplicate_str;
	char *temp2 = duplicate_str;
	memset(duplicate_str, '\0', sizeof(c));
	*duplicate_str = c[0];
	duplicate_str++;


// for each character check if its already present in duplicate_str, if not, then add it
	for (i = 0; c[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0,duplicate_str=start_holder; j<k; j++,duplicate_str++)
		{
		
			if (c[i] == *duplicate_str)
			{
				flag = 1;
				
				break;
			}
			
		}
		if (!flag)
		{

			
			*duplicate_str = c[i];
			duplicate_str++;
			k++;
		}
	}
	*duplicate_str = '\0';
	printf("string: %s\n", start_holder);
	free(start_holder);
}
int palindrome(char c[])
{
	
	int count = 0,i=0,j=0,flag=0;
	for (i=0; c[i]!= '\0'; i++)
	{
		count++;
	}
	

	//Begin from index 0 and lenght-1
	//check if all values are equal or i==j, if conditions true, its a palindrome else not.
	for (i=0,j=count-1; i<count,j>=0; i++,j--)
	{
			if (i != j)
			{
				if (c[i] == c[j])
				{
					continue;
				}
				else
				{	
					return 0;
				}
			}
			else
				return 1;
		}
	
	return 0;
}
char num[10];
char *num_convert(int val)
{
	int d,i=0;
	d = val;
	
	while (d > 0)
	{
		num[i++] = d % 10 + 48;
		d = d / 10;

	}
	num[i] = '\0';
	return num;
}
void compression(char c[])
{
	char *compressed_str = (char*)malloc(sizeof(c));
	char *temp1, *start_holder;
	int i = 0,j=0, k = 0,flag=0,count=0;
	memset(compressed_str, '\0', sizeof(c));
	start_holder = compressed_str;
	
// for each character, add it to compressed_str and then count number of further occurences of same character
	for (i = 0; c[i] != '\0'; i = i + count)
	{
		
			count = 0;
			*compressed_str = c[i];
			compressed_str++;
			count = 1;
			for (j = i+1; c[i] == c[j]; j++)
			{
				count++;	
			}
			temp1 = num_convert(count);
			for (k = 0; *temp1 != '\0'; k++)
			{
				*compressed_str = *temp1;
				temp1++;
				compressed_str++;
			}
			
	}
	*compressed_str = '\0';
	printf("string is %s\n", start_holder);
	
}
void main()
{
	char c[] = "hello";
	char d[] = "aabbbccc";
	int flag = palindrome(c);
	int x;
	if (flag)
		printf("%s is a palindrome\n",c);
	else
		printf("%s is not a palindrome\n",c);

	duplicate(c);
	compression(d);
	x = 0;

	

}