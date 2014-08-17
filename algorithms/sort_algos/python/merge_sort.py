from random import shuffle

def merge_sort(seq):
    
    if len(seq) <= 1:
        return seq

    middle = len(seq)/2
    left = merge_sort(seq[:middle])
    right = merge_sort(seq[middle:])
    return  merge(left, right)


def merge(left, right):
    result = []
    left_index,right_index = 0, 0
    left_len, right_len = len(left), len(right)
    while left_index < left_len and right_index < right_len:
        if left[left_index] < right[right_index]:
            result.append(left[left_index])
            left_index += 1
        else:
            result.append(right[right_index])
            right_index += 1
    if left_index < left_len:
        result.extend(left[left_index:])
    else:
        result.extend(right[right_index:])

    return result
if __name__ == '__main__':
    test_data = range(10)
    test_case = test_data[:]
    shuffle(test_case)
    assert test_data != test_case, "Data is sorted."
    print "Unsorted data: %s" % test_case
    test_case = merge_sort(test_case)
    print "Sorted data: %s" % test_case
    assert test_data == test_case, "Data is not sorted."


