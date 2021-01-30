# URI - 3077

n, k = (int(i) for i in input().split())

arr = list(map(int, input().split()))

s = sum(arr)
div = k//n
maxn = div*s
array = [maxn] * n

for i in range((n*div), k):
    for j in range(n):
        array[(j+i)%n] += arr[j]

for i in range(n):
    print(array[i], end="")
    if i < n - 1:
        print(" ", end="")
print()
