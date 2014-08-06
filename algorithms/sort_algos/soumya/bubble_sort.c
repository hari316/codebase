#include<stdio.h>
void sort(int *array,int len)
{
	int index_i,index_j,temp;
	for(index_i=0;index_i<len-1;index_i++)
	{
		for(index_j=0;index_j<len-index_i-1;index_j++)
		{
			printf("%d %d ",(*(array+index_j)),(*(array+index_j+1)));
			if((*(array+index_j))>(*(array+index_j+1)))
			{
				printf("swapping\n");
				temp=(*(array+index_j));
				(*(array+index_j))=(*(array+index_j+1));
				(*(array+index_j+1))=temp;
				continue;
			}
			printf("no swap ");
		}
		printf("\n");
	}	

}
int main()
{
	int array[]={3,6,2,5,8,1};
	int index=0;	
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}	
		
	sort(array,6);
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}	
	scanf("%d",&index);
}
