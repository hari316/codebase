#include<stdio.h>
void sort(int *array,int len)
{
	int smallest=0,index=0,index_j=0,temp=0;
	for(index=0;index<len;index++)
	{
		smallest=index;
		for(index_j=index;index_j<len;index_j++)
		{
			if((*(array+smallest))>(*(array+index_j)))
			{
				temp=(*(array+smallest));
				(*(array+smallest))=(*(array+index_j));
				(*(array+index_j)) = temp;
			}
		}
	}
}
int main()
{
	int array[]={3,6,2,8,9,11};
	int index=0;
	sort(array,6);
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}
	return 0;
}
