from itertools import groupby

def compress_str(input_str):
    
    compressed_str = []
    for key, grp_list in groupby(input_str):
        compressed_str.extend([key,str(len(list(grp_list)))])
    return "".join(compressed_str)

if __name__ == '__main__':
    input_str = "aabbbccc"
    print compress_str(input_str)
