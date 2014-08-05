//sttrev in place
#include "stdafx.h"
#include<stdio.h>
void strrev(char *string)
{
	char *index = string,*back_index=string;
	char temp;
	//moving back_index to point to the last character
	for (; *back_index != '\0'; back_index++);
	back_index--;
	
	while (!(index == back_index))
	{
		temp = *index;
		*index = *back_index;
		*back_index = temp;
		index++;
		back_index--;
	}


}
int main()
{
	char string[] = "hello";
	int d = 0;
	printf("%s\n", string);
	strrev(string);
	printf("reverese string : %s", string);
	d = 6;
	return 0;
}

