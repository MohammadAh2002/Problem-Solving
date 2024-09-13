# Write A Function That Take an Array
# Sort the Array Using Selection Sort
# From the Largest to the Smallest

def LargestElementIndex(Arr):

    Largest = Arr[0]
    LargestIndex = 0

    for i in range(1, len(Arr)):
        if Arr[i] > Largest:
            Largest = Arr[i]
            LargestIndex = i

    return LargestIndex     

def MySelectionSort(Arr):

    NewArr = []
    CopiedArr = list(Arr)

    for i in range(len(CopiedArr)):
        Largest = LargestElementIndex(CopiedArr)
        NewArr.append(CopiedArr.pop(Largest))
    
    return NewArr

Arr = [5,3,6,2,10,0,1,4,7,8,9]

print(MySelectionSort(Arr))
