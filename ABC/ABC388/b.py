n,d= map(int,input().split())
t = []
l = [] 
for i in range(n):
  x,y= map(int,input().split())
  t.append(x)
  l.append(y)

for i in range(1,d+1):
  a = []
  for j in range(n):
    a.append(t[j]*(l[j]+i))
  print(max(a))

