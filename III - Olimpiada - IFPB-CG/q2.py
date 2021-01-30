# URI - 2095

def bb(arr, V, N, Q):
    while arr[0] <= N:
        m = (arr[0] + N) // 2
        if V <= Q[m]:
            N = m - 1
        else:
            arr[0] += 1
            return True
    return False


inpt = int(input())

Q = list(map(int, input().split(" ")))
N = list(map(int, input().split(" ")))
Q.sort()
N.sort()
# _i, count
arr = [0, 0]

for i in range(inpt):
    if bb(arr, N[i], (inpt - 1), Q):
        arr[1] += 1
print(arr[1])
