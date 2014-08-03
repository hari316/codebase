#include<stdio.h>

int main()
{
    int set_bit = 2;
    int clear_bit = 1;
    unsigned int num = 7;
    unsigned int temp = 0;
    unsigned int res = 0;
    temp  = num & (1<<set_bit);
    temp = temp>>clear_bit;
    res = num & ~temp;
    
    printf("Result when 4th bit set and 2nd bit cleared of number %u: %u\n", num, res);
    return 0;
}
