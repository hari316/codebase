from random import shuffle

def bubble_sort(seq):    
    changed = True
    while changed:
        changed = False
        for index in xrange(len(seq)-1):
            if seq[index] > seq[index+1]:
                seq[index], seq[index+1] = seq[index+1], seq[index]
                changed = True 
    return None #list.sort() does not return 

def bubble_sort_1(seq):
    for pos_upper in xrange(len(seq)-1, 0, -1):
        for index in xrange(pos_upper):
            if seq[index] > seq[index+1]:
                seq[index], seq[index+1] = seq[index+1], seq[index]
    return None #list.sort() does not return 

if __name__ == '__main__':
    test_data = range(10)
    test_case = test_data[:]
    shuffle(test_case)
    assert test_data != test_case, "Data is sorted."
    print "Unsorted data: %s" % test_case
    bubble_sort(test_case)
    print "Sorted data: %s" % test_case
    assert test_data == test_case, "Data is not sorted."
