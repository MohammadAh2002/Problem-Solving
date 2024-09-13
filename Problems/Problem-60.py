# Write A Function That Take an Array
# Sort the Array Using Selection Sort
# From the Smallest to the Largest

def SmallestElementIndex(Arr):

    Smallest = Arr[0]
    SmallestIndex = 0

    for i in range(1, len(Arr)):
        if Arr[i] < Smallest:
            Smallest = Arr[i]
            SmallestIndex = i

    return SmallestIndex     

def MySelectionSort(Arr):

    NewArr = []
    CopiedArr = list(Arr)

    for i in range(len(CopiedArr)):
        Smallest = SmallestElementIndex(CopiedArr)
        NewArr.append(CopiedArr.pop(Smallest))
    
    return NewArr

Arr = [5,3,6,2,10,8,0,4,7,9,1]

print(MySelectionSort(Arr))
