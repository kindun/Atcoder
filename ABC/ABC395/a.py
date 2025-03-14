n = int(input())
a = list(map(int,input().split()))

if all(a[i] < a[i+1] for i in range(n-1)):
    print("Yes")
else:
  print("No")

