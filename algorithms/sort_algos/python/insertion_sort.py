from random import shuffle

def insertion_sort(seq):
    for index in xrange(1,len(seq)):
        key = seq[index]
        prev_index = index-1
        while seq[prev_index] > key and prev_index > -1:
            seq[prev_index+1] = seq[prev_index]
            prev_index -= 1
        seq[prev_index+1] = key
    return seq

if __name__ == '__main__':
    test_data = range(10)
    test_case = test_data[:]
    shuffle(test_case)
    assert test_data != test_case, "Data is sorted."
    print "Unsorted data: %s" % test_case
    print "Sorted data: %s" % insertion_sort(test_case)
    assert test_data == test_case, "Data is not sorted."
