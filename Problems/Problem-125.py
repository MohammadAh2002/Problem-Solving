# You’re given an array of numbers. You have to add up all the numbers and return the total.
# do it with a recursive function.

def SumOfArray(Arr):

    if Arr == []:
        return 0

    return Arr[0] + SumOfArray(Arr[1:])

Arr = [2,4,6]

print(SumOfArray(Arr))