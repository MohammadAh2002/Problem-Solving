# Write a Program to Print the Numbers From 10 to 1
# Use Recursion not Lopp

def CountDown(i):

    if i < 1:
        return

    print(i)

    CountDown(i - 1)

CountDown(10)
