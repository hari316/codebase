#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void matrix_multiplication(int **num_array_a,int **num_array_b,int **result, int num_rows, int num_cols)
{
	int index_i = 0, index_j = 0,k=0;
	for (index_i = 0; index_i < num_rows; index_i++)
	{
		for (index_j = 0; index_j < num_cols; index_j++)
		{
			*(*(result + index_i) + index_j) = 0;
			for (k = 0; k < num_cols; k++)
			{
				*(*(result + index_i) + index_j) += ((*(*(num_array_a + index_i) + k)) * (*(*(num_array_b+k)+index_j)));
			}
		}

	}

}
int main()
{
	int index=0,d;
	
	int **matrix_a = (int**)malloc(2 * sizeof(int*));
	int **matrix_b = (int**)malloc(2 * sizeof(int*));

	int a[2][2] = { 1, 2 , 3, 4 };
	int b[2][2] = { 1, 2, 2, 4 };
	int **mulres=NULL;
	mulres = (int**)malloc(2 * sizeof(int*));
	for (index = 0; index < 2; index++)
	{
		*(mulres + index) = (int*)malloc(2 * sizeof(int));
	}
	for (index = 0; index < 2; index++)
	{
		*(matrix_a+index) = (int*)malloc(2 * sizeof(int));
	}
	for (index = 0; index < 2; index++)
	{
		*(matrix_b + index) = (int*)malloc(2 * sizeof(int));
	}
	for (index = 0; index < 2; index++)
	{
		for (d = 0; d < 2; d++)
		{
			matrix_a[index][d] = a[index][d];
			matrix_b[index][d] = b[index][d];
		}
	}
	matrix_multiplication(matrix_a, matrix_b, mulres, 2, 2);
	for (index = 0; index < 2; index++)
	{
		for (d = 0; d < 2; d++)
		{
			printf("%d ", *(*(mulres + index) + d));
		}
		printf("\n");
	}
return 0;
}