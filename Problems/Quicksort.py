# Write a Quicksort function

def Quicksort(Arr):

    if len(Arr) < 2:
        return Arr

    Pivot = Arr[len(Arr) // 2]

    Less = [i for i in Arr if i < Pivot]
    Greater = [i for i in Arr if i > Pivot]

    return Quicksort(Less) + [Pivot] + Quicksort(Greater) 

Arr = [5,6,3,9,4,8,2,7,1,0]

print(Quicksort(Arr))
