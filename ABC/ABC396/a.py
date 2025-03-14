n = int(input())
a = list(map(int,input().split()))

for i in range(n-2):
  if (a[i] == a[i+1]):
    if(a[i+1] == a[i+2]):
      print("Yes")
      exit(0)
     

print("No")
