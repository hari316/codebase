#include<stdio.h>
void sort(int *a,int len)
{
	int index_i,index_j,k,val;
	for(index_i=1;index_i<len;index_i++)
	{
		val=a[index_i];

		for(index_j=index_i-1;index_j>=0;index_j--)
		{
			
			if(val<a[index_j])
			{

				a[index_j+1]=a[index_j];
			
			}
			else
			{
			
				a[index_j+1]=val;
				break;
			}	
			if(index_j==0)
			{
				a[index_j]=val;
				
				break;
			}
			
		}
	
	}

}
int main()
{
 	int array[]={8,3,6,7,4,2};
	int index=0;	
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}	
	printf("\n");
	sort(array,6);
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}
	return 0;
}
