q = int(input())
a = [0 for _ in range(q)]
for i in range(q):
  sub = list(map(int,input().split()))
  if(sub[0] == 2):
    print(a.pop(len(a)-1))
  else:
    if(len(sub) > 1):
      a.append(sub[1])
    



