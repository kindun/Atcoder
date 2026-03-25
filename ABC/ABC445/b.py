n = int(input())
s = [input() for _ in range(n)]
m = len(max(s, key=len))
for i in s: print(i.center(m, "."))


