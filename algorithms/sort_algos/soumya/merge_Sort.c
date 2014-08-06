#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int start_index,int mid_index,int end_index)
{
	int i=start_index,j=mid_index+1;
	int temp[6],index=0;
		 
	i=start_index;
	while((i<=mid_index)&&(j<=end_index))
	{
		if(a[i]<=a[j])
		{	
			temp[index++]=a[i++];
                }
		else
		{       
			temp[index++]=a[j++];
		}
	}
	if((i>mid_index))
	{
		for(;j<=end_index;j++)
		{
			
			temp[index++]=a[j];
		}
	}
	else
	{
		for(;i<=mid_index;i++)
		{
			temp[index++]=a[i];
		}	
	}
	for(i=start_index,j=0;i<=end_index;i++,j++)
	{
		a[i]=temp[j];
	}
	for(i=start_index;i<=end_index;i++)
	{
		printf("%d ",a[i]);
	}	
	printf("\n");
	
		
}
void sort(int a[], int start, int end)
{
	int middle=0;
	if(start<end)
	{
		middle=(start+end)/2;
		
		sort(a,start,middle);
		sort(a,middle+1,end);
		merge(a,start,middle,end);
	}

}
int main()
{
	int array[]={8,5,6,4,9,3};
	int index;
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}
	
	sort(array,0,5);
	for(index=0;index<6;index++)
	{
		printf("%d ",array[index]);
	}
	
	
}
