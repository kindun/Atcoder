s = input()

a = ab = ans = 0

for c in s:
    if c == 'A':
        a += 1
    elif c == 'B' and a > 0:
        a -= 1
        ab += 1
    elif c == 'C' and ab > 0:
        ab -= 1
        ans += 1

print(ans)