#!/usr/bin/python3
def no_c(my_string):
    num = len(my_string)
    new = []
    for i in range(num):
        if my_string[i] != "c" and my_string[i] != "C":
            new.append(my_string[i])
    return ("".join(new))
