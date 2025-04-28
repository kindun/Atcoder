import random
N, L = map(int,input().split())
t = list(map(int,input().split()))
a = [0] * N
b = [0] * N

T = [{"index":x,"value":i} for x, i in enumerate(t)]

T_sort = sorted(T,key=lambda x:x["value"], reverse=True)
weight = [0] * N
T_index = [item["index"] for item in T_sort]
t_sort = sorted(t,reverse=True)
for i in range(N):
    weight[i] = t_sort[i]/10000
#print(weight)
#print(T_index)

a = random.choices(T_index, weights=weight,k=len(t))
b = random.choices(T_index, weights=weight,k=len(t))

for i in range(N):
    print(a[i],b[i])

