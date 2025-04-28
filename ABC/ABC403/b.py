T = input()
S = input()
for i in range(len(T) - len(S) + 1):
    check = True
    for j in range(len(S)):
        if T[i + j] != '?' and T[i + j] != S[j]:
            check = False
            break
            
    if check:
        print("Yes")
        exit()
print("No")
