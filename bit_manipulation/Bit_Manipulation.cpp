#include <iostream>
#include <math.h>

//#include <stdio.h>
//#include <conio.h>
using namespace std;

void display_bit_represntation (int number)
{
	int count_bits = 0;
	cout<<"\nBit Represntation : ";
	unsigned int mask=1<<((sizeof(number)*8)-1); //1000 0000 0000 0000 0000 0000 0000 0000
	while(mask > 0)
	{

		if((number & mask) == 0)
			cout<<"0";
		else
			cout<<"1";
		count_bits++;
		if (count_bits%4 == 0)
			cout<<" ";
		mask = mask >> 1 ;
   }
}

int number_of_ones_nlogic ( int number)
{ 
	int count = 0;
	while (number != 0)
	{
		if (number % 2 != 0)
			count++;
		number = number>>1;
	}
	return count;
}
int number_of_ones_mlogic ( int number)
{ 
	int count = 0;
	while (number != 0)
	{
		number = (number & number - 1);
		count ++;
	}
	return count;
}

int specific_bit_manipulation (int number)
{
	int result = number;
	if ((number>>12) % 2 == 1 && (number>>7) % 2 == 1)
		result = result - 128;
	return result;
}

int specific_bit_manipulation_without_conditional (int number)
{
	int result = number;
	int eighth_bit = (number>>12)%2 & (number>>7)%2;
	eighth_bit = ~(eighth_bit << 7);
	result = number & eighth_bit;
	return result;
}

int swap_adjacant_bits (int number)
{
	int result = 0;
	int mask_odd = 0;
	int mask_even = 0;
	int max_shifts= (sizeof(number)*8)/2;
	for (int no_of_shifts = 0; no_of_shifts < max_shifts; no_of_shifts++)
	{
		mask_odd +=  1<<(2*no_of_shifts);
		mask_even += 2 <<(2*no_of_shifts);
	}
	result = (number & mask_odd) << 1 | (number & mask_even) >> 1;
	return result;
}

int main(int argc, char** argv)
{
	int number;
	int count_of_ones = 0;
	int new_number_2a = 0;
	int new_number_2b = 0;
	int new_number_3 = 0;

	cout<< "Enter Number : ";
	cin >> number;
	cout << "Number is: "<<number;
	display_bit_represntation(number);
	cout<<"\n\nQuestion 1:";
	count_of_ones = number_of_ones_nlogic(number);
	cout<<"\nNumber of 1s : "<<count_of_ones;
	count_of_ones = number_of_ones_mlogic(number);
	cout<<"\nNumber of 1s : "<<count_of_ones;
	cout<<"\n\nQuestion 2a:";
	new_number_2a = specific_bit_manipulation(number);
	cout<<"\nResetting 8th bit if 13th bit is set : "<<new_number_2a;
	display_bit_represntation(new_number_2a);
	cout<<"\nQuestion 2b:";
	new_number_2b = specific_bit_manipulation_without_conditional(number);
	cout<<"\nResetting 8th bit if 13th bit is set : "<<new_number_2b;
	display_bit_represntation(new_number_2b);
	cout<<"\n\nQuestion 3:";
	new_number_3 = swap_adjacant_bits(number);
	cout<<"\nSwapping adjacant bits : "<<new_number_3;
	display_bit_represntation(new_number_3);

	return 0;
}
