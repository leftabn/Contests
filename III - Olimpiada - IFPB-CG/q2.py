# URI - 2095

def bb(I, V, N, Q):
    while I <= N:
        m = (I + N) // 2
        if V <= Q[m]:
            N = m - 1
        else:

            return True
    return False


inpt = int(input())

Q = list(map(int, input().split(" ")))
N = list(map(int, input().split(" ")))
Q.sort()
N.sort()

I = 0
count = 0

for i in range(inpt):
    if bb(I, N[i], (inpt - 1), Q):
        I += 1
        count += 1
print(count)
