def mergesort(L):
    """归并排序"""
    workspace = []
    for i in range(len(L)):
        workspace.append([L[i]])
    
    i = 0

    while i < len(workspace) -1:
        L1 = workspace[i]
        L2 = workspace[i + 1]
        newL = merge(L1, L2)
        workspace.append(newL)

        i += 2
    if len(workspace) != 0:
        L[:] = workspace[-1][:]



def merge(L1, L2):
    """合并两个列表"""

    newL = []
    i1 = 0
    i2 = 0

    while i1 != len(L1) and i2 != len(L2):
        if L1[i1] < L2[i2]:
            newL.append(L1[i1])
            i1 += 1
        else:
            newL.append(L2[i2])
            i2 += 1

    newL.extend(L1[i1:])
    newL.extend(L2[i2:])

    return newL
