#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number >= 0:
    div = number % 10
    if div == 0:
        print(f"Last digit of {number} is {div} and is 0")
    elif div < 6:
        print(f"Last digit of {number} is {div} and is less than 6 and not 0")
    else:
        print(f"Last digit of {number} is {div} and is greater than 5")
elif number < 0:
    anum = number * (-1)
    div = anum % 10
    print(f"Last digit of {number} is {-div} and is less than 6 and not 0")
