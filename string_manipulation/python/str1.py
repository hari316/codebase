def is_palindrome(input_str):
    str_len = len(input_str)
    if str_len == 1:
        return False
    for index in range(str_len/2):
        if input_str[index] != input_str[str_len - 1 - index]:
            return False
    return True

if __name__ == '__main__':
    s = 'abba'
    print is_palindrome(s)
