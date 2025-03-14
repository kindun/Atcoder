n,m = map(int, input().split())
a = sorted(list(map(int, input().split())),reverse=True)
b = sorted(list(map(int, input().split())),reverse=True)

s, t, maxT = [0]*(n+1), [0]*(m+1), [0]*(m+1)
for i in range(n):
  s[i+1] = s[i] + a[i]

for i in range(m):
  t[i+1] = t[i] + b[i]
  maxT[i+1] = max(maxT[i], t[i+1])
  
ans = 0
for i in range(1,n+1):
  ans = max(ans, s[i] + maxT[min(i, m)])

print(ans)
