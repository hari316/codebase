from random import shuffle

def quick_sort(seq):
    
    if len(seq) > 1:
        return (quick_sort([element for element in seq if element < seq[0]])
        + [seq[0]]
        + quick_sort([element for element in seq if element > seq[0]]))
    else:
        return seq

def quick_sort_1(seq):
    lesser = []
    equal = []
    greater = []

    if len(seq) > 1:
        pivot = seq[0]
        for element in seq:
            if element < pivot:
                lesser.append(element)
            elif element == pivot:
                equal.append(element)
            else: 
                greater.append(element)
        return quick_sort_1(lesser) + equal + quick_sort_1(greater) 
    else:
        return seq


if __name__ == '__main__':
    test_data = range(10)
    test_case = test_data[:]
    shuffle(test_case)
    assert test_data != test_case, "Data is sorted."
    print "Unsorted data: %s" % test_case
    test_case = quick_sort(test_case)
    print "Sorted data: %s" % test_case
    assert test_data == test_case, "Data is not sorted."
