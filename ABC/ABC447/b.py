import collections 
s = input()
c = collections.Counter(s).most_common()
largest = c[0][1]

remove_value = []
for i in c:
    if i[1] == largest:
        remove_value.append(i[0])
    else:
        break
for i in remove_value:
    s = s.replace(i, "")
print(s)