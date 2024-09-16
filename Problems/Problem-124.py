# Write a recursive function to find the maximum number in a list.

def MaxOfArray(Arr):

    if len(Arr) == 2:
        return Arr[0] if Arr[0] > Arr[1] else Arr[1]

    sub_max = MaxOfArray(Arr[1:])

    return Arr[0] if Arr[0] > sub_max else sub_max

Arr = [1,2,6,8,9,7,4,2,1,5,0]

print(MaxOfArray(Arr))