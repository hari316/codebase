
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort_alphabetically(char **strings, int num_rows)
{
	int index = 0,inner_index=0;
	char *temp_swap = NULL;
//use bubble sort and sort the arrays
	for (index = 0; index < num_rows-1; index++)
	{
		for (inner_index = 0; inner_index < num_rows - 1 - index; inner_index++)
		{
			if ((strcmp((*(strings + inner_index)), ((*(strings + inner_index + 1)))))>0)
			{
				temp_swap = *(strings + inner_index);
				*(strings + inner_index) = *(strings + inner_index + 1);
				*(strings + inner_index + 1) = temp_swap;
			}
		}
	}

}
int main()
{
	
	int index=0,d;
	
	char *strings[3]= {  "ab" ,  "cd" ,  "ac"  };

	sort_alphabetically(strings,3);
	for (index = 0; index < 3; index++)
	{
		printf("%d : %s\n", index + 1, *(strings + index));
	}

}