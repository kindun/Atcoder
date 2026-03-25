"""
n = int(input())

C = [[] for _ in range(n-1)]
for i in range(n-1):
    C[i] = list(map(int, input().split()))

#print(C)
for a in range(n):
    for b in range(a+1, n):
        for c in range(b+1, n):
          #  print(a, b, c)
            if C[a][c-a-1] > C[a][b-a-1] + C[b][c-b-1]:
                print("Yes")
                exit()

print("No")

"""

N=int(input())
C=[[None]*(i+1)+list(map(int,input().split())) for i in range(N-1)]
print(C)
ans="No"
for a in range(N):
    for b in range(a+1,N):
        for c in range(b+1,N):
            if C[a][b]+C[b][c]<C[a][c]:
                ans="Yes"
print(ans)

    






