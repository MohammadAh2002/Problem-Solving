# write binary search function
# the function takes a sorted array and an item
# If the item is in the array, the function returns its position.

def MyBinarySearch(Arr, Item):
    
    Low = 0
    High = len(Arr) - 1

    while Low <= High:

        Mid = (Low + High) // 2
        Guess = Arr[Mid]
        
        if Guess == Item:
            return Mid

        elif Guess > Item:
            High = Mid - 1

        else:
            Low = Mid + 1

    return None

MyList = [0,1,2,3,4,5,6,7,8,9]

print(MyBinarySearch(MyList,3))
print(MyBinarySearch(MyList,-1))
