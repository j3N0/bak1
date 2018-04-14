def double(val):
    if val == []:
        pass
    else:
        for i in range(1,len(val))[::-1]:
            val[i] = val[i -1] * 2
        val[0] = 0    
        
def double2(val):
    if val == []:
        pass
    else:
        temp = val[0]
        val[0] = 0
        for i in range(1, len(val)):
            val[i], temp = 2 * temp, val[i]

