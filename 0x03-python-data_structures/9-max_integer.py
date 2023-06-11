#!/usr/bin/python3
def max_integer(my_list=[]):
    if my_list == []:
        return None
    else:

        n_max = my_list[0]
        for i in range(len(my_list)):
            if my_list[i] >= n_max:
                n_max = my_list[i]

        return n_max
