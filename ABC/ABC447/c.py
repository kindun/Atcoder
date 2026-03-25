s = input()
t = input()

i = j = 0
ans = 0
l_s, l_t = len(s), len(t)
while i < l_s or j < l_t:
    if i < l_s and j < l_t and s[i] == t[j]:
        i += 1
        j += 1
    elif i < l_s and s[i] == 'A':
        ans += 1
        i += 1
    elif j < l_t and t[j] == 'A':
        ans += 1
        j += 1
    else :
        print(-1)
        exit()

print(ans)
    
    

