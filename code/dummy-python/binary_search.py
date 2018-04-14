def binary_search(v, l):
    """二分搜索 返回v在l中的索引"""

    i = 0
    j = len(l) - 1
    
    while i != j + 1:
        m = int((i + j) / 2)
        if l[m] < v:
            i = m + 1
        else:
            j = m - 1
    
    if i <= i < len(l) and l[i] == v:
        return i
    else:
        return -1


