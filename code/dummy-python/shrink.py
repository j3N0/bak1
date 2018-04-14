def remove_neg(num_list):
    for item in num_list:
        if item < 0:
            num_list.remove(item)

                    
def remove2(num_list):
    for item in num_list:
        if item < 0:
            num_list.remove(item)
            remove2(num_list)
