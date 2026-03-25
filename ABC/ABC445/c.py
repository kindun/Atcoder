n=int(input())
a=list(map(int, input().split()))

for i in range(n-1, -1, -1):
    a[i] = a[a[i]-1]

print(*a)