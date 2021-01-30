# URI - 1110

n = int(input())

while (n!=0):
    lst = [(x+1) for x in range(0, n)]
    print("Discarded cards:", end=" ")
    while (len(lst) > 2):
        print(str(lst[0]) + ",", end= " ")
        lst.pop(0)
        lst.append(lst.pop(0))
    print(lst[0])
    print("Remaining card: " + str(lst[-1]))
    n = int(input())
