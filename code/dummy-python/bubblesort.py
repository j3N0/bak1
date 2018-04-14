def bubblesort(L):
    
    for i in range(len(L)):
       j = 0
       while j < len(L) - i - 1:
           if L[j] > L[j + 1]:
               L[j], L[j + 1] = L[j + 1], L[j]
            
           j += 1


def bubblesort2(L):

    bubblelist = len(L)

    while bubblelist > 0:
        for i in range(bubblelist -1):
            if L[i] > L[i + 1]:
                L[i], L[i + 1] = L[i + 1], L[i]

        bubblelist -= 1


def reverse_bubble(L):

    end = 1
    
    while end < len(L)-1:
        for i in range(len(L) - 1, end, -1):
            if L[i] < L[i -1]:
                L[i], L[i -1] = L[i - 1], L[i]

        end += 1

