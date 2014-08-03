def count_ones(number):
    count = 0
    while number != 0:
        number  = number & (number-1)
        count += 1
    return count

if __name__ == '__main__':
    num = 7
    print count_ones(num) 
