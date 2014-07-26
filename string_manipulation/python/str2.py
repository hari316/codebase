from collections import OrderedDict

def remove_duplicate_char(input_str):
    return "".join(OrderedDict.fromkeys(input_str.strip()))

if __name__ == '__main__':
    input_str = " mississippi"
    print remove_duplicate_char(input_str)
