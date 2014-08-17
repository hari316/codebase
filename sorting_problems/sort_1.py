# Solution in nlogn time complexity.
def is_anagram_1(str1, str2):  
    if sorted(str1.lower())==sorted(str2.lower()):
        return True
    return False

# Solution in n time complexity.
def is_anagram(str1, str2):
    if primehash(str1) == primehash(str2):
        return True
    return False

def primehash(str_input):
    prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
        61, 67, 71, 73, 79, 83, 89, 97, 101]
    prod=1
    for char in str_input:
        prod*=prime[ord(char) - ord('a')]
    return prod

if __name__=='__main__':
    str1 = "War"
    str2 = "Raw"
    if is_anagram(str1, str2):
        print "Strings %s and %s are anagrams"%(str1,str2)
    else:
        print "Strings %s and %s are not anagrams"%(str1, str2)
