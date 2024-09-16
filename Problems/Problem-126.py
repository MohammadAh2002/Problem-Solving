# Write a recursive function to count the number of items in a list.

def NumberOfItemsInArray(Arr):
    
    if Arr == []:
        return 0
    
    return 1 + NumberOfItemsInArray(Arr[1:])

Arr = [1,2,3,4,5,6,7,8,9,0]

print(NumberOfItemsInArray(Arr))
