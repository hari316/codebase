#include<stdio.h>

int one_count(int number)
{
 	int count=0;
	while(number>0)
	{
		if((number%2)==1)
		{
			count++;
		}
		number=number/2;
	}
	return count;
}
int one_count_bitwise(int number)
{
	int count=0;
	while(number>0)
	{
		if(number&1)
		{
			count++;
		}
		number=number>>1;
	}
	return count;
}
int check_bit_set(unsigned int number)
{
	if(number&8192)
	{
		number=number&(~(256));
		printf("number has 13th bit unset\n");
	}
	return number;
}
int check_bit_without_condition(int number)
{
	int temp_result=(1<<13)& number;
	
	int result=(~(temp_result>>5))&number;
	return result;

}
int swap_bits(int number)
{
	
	int index=0;
	while((1<<index)<=number)
	{
		if(number & (1<<index))
		{
			if(number & (1<<(++index)))
			{
				//both have 1 set
				index++;
				
			}
			else
			{  // of the form 01- swap
				number &= (~(1 <<(index-1)));
				number |= (1<<(index));
				index++;
			}
		}
		else
		{
			//of the form 10--swap
			if(number & (1<<(++index)))
			{
				number &= (~(1<<(index)));
				number |= (1<<(index-1));
				index++;
			}
			else
			{
				//both have 0
				index++;
			}
					
		}

			
			
		}
	
return number;
	
}

int count_bit_o_m(int number)
{
	int count=0;
	while(number>0)
	{
		number=number&number-1;	
		count++;
	}
	return count;
}
int main()
{
	int x=8449;
	int bit_count=6;
	printf("number of ones in %d : %d\n",bit_count,one_count(bit_count));
	printf("number of ones using o(m)  in %d: %d\n",bit_count,count_bit_o_m(bit_count));
	printf("number of ones in %d : %d\n",x,one_count_bitwise(x));
	printf("number after checking for 13th set bit %d\n",check_bit_set(x));
	printf("without loop: %d\n",check_bit_without_condition(x));
	printf("number after swap : %d -- %d\n",2,swap_bits(2));
	scanf("%d",&x);
	return 0;
}
