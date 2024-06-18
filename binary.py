def binarysearch(lst, item):
    low = 0
    high = len(lst) - 1

    while low <= high:
        mid = (low + high) // 2
        guess = lst[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    
    return "none"

my_list = [1, 3, 5, 7, 9]

print(binarysearch(my_list, 3)) 
print(binarysearch(my_list, 7))  
