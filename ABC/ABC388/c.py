n = int(input())
a = list(map(int,input().split()))[:n]
count = 0

index = n-2
for i in range(n-1,0,-1):
  while (a[index]*2 > a[i] and index>=0):
    index-=1
  count += index+1;
  
print(count) 
