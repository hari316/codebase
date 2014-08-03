from random import shuffle

def selection_sort(seq):
    for index in range(len(seq)-1):
        min_index = min(range(index, len(seq)), key=seq.__getitem__)
        seq[index], seq[min_index] = seq[min_index], seq[index]
    return seq

if __name__ == '__main__':
    test_data = range(10)
    test_case = test_data[:]
    shuffle(test_case)
    assert test_data != test_case, "Data is sorted."
    print "Unsorted data: %s" % test_case
    print "Sorted data: %s" % selection_sort(test_case)
    assert test_data == test_case, "Data is not sorted."
