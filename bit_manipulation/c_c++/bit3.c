#include<stdio.h>

int main()
{
    int first_bit = 0;
    int second_bit = 1;
    unsigned int num = 7;
    unsigned int len = sizeof(num) * 8;
    unsigned int first_val = 0;
    unsigned int second_val = 0;
    
    whiile(len != 0) {
        first_val = num & (1<<first_bit)
        second_val  = num & (1<<second_bit);
        num |= first_val << second_bit
        num |= second_val << first_bit
        len -= 2
        first_bit += 2
        second_bit += 2
    }

    printf("Result when 4th bit set and 2nd bit cleared : %u\n", num);
    return 0;
}
