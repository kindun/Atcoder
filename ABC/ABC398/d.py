n, r, c = map(int, input().split())
S = input()
smoke = set() 
T = [r,c]
F = [0,0]
smoke.add((F[0], F[1]))
for s in S:
    if s == 'N':
        T[0] += 1
        F[0] += 1
    elif s == 'W':
        T[1] += 1
        F[1] += 1
    elif s == 'S':
        T[0] -= 1
        F[0] -= 1
    else: 
        T[1] -= 1 
        F[1] -= 1

    smoke.add((F[0], F[1]))
    if (T[0], T[1]) in smoke:
        print(1, end="")
    else:
        print(0, end="")

            
            
   
