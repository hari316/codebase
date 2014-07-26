// StringConcat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
bool palindrone (char a[], int length)
{
	//Assuming not palindrone
	for (int i = 0; i < length/2; i++)
	{
		if (a[i] != a[length-1-i])
			return false;
	}
	//unless it encounters return it is palindrone
	return true;
}
char* singleletter(char a[],int length)
{

	int count = 0;
	char* result = (char*) malloc (length);
	memset (result, '\0',sizeof(result));
	for (int i = 0; i < length; i++)
	{
		bool found = false;
		for (int j = 0; j < count; j++)
		{
			if (a[i] == result[j])
			{
				found = true;
				break;
			}
		}
		if (found == false)
			result[count++] = a[i];
	}
	result[count] = '\0';

	return result;
}
char* reversestring (char a[])
{
	int length=0;

	for (int i = 0; a[i] != '\0'; i++)
		length++;
	char* result = (char*) malloc (length);
	memset (result, '\0', sizeof(result));
	for (int i = 0; i < length; i++)
		result[length-1-i] = a[i];
	return result;
}

char* numbertostring (int a)
{
	char* result = (char*) malloc (10);
	memset (result, '\0', sizeof(result));
	int i = 0;
	while (a!=0)
	{
		result[i] = (a%10)+48;
		a=a/10;
		i++;
	}
	result[i]= '\0';
	return result;
}

char* Hoffmancoding (char a[],int length)
{
	char current;
	char* result = (char*) malloc (length*2);
	memset (result, '\0', sizeof(result));
	char* temp_char = (char*) malloc (10);
	memset (temp_char, '\0', sizeof(temp_char));

	int count;
	int currentindex = 0;
	
	for (int i = 0; i < length; i++)
	{
		current = a[i];
		result[currentindex++] = a[i];
		count = 1;
		while (a[++i] == current)
			count++;
		temp_char = numbertostring (count);
		temp_char = reversestring(temp_char);
		for (int j = 0; temp_char[j] != '\0'; j++)
			result[currentindex++] = temp_char[j];
		i--;
	}
	result[currentindex] = '\0';	
	return result;
}



int main(int argc, char** argv)
{
	char* a = "malayalam";
	int length = 0;
	for (int i = 0; a[i] != '\0'; i++)
		length++;
	cout<<"\nInput: ";
	for (int i = 0; i < length; i++)
		cout<<a[i];

	cout<<"\nQuestion 1: Palindrone or not?\nOutput 1: ";
	bool value = palindrone (a, length);
	if (value == true)
		cout<<"Palindrone";
	else
		cout<<"Not Palindrone";

	cout<<"\nQuestion 2: All characters present\nOutput 2: ";
	char* b = singleletter (a, length);
	for (int i = 0; b[i]!='\0'; i++)
		cout<<b[i];

	cout<<"\nQuestion 3: Run length encoding\nOutput 3: ";
	char* c = Hoffmancoding(a, length);
	for (int i = 0; c[i]!='\0'; i++)
		cout<<c[i];
	return 0;
}

