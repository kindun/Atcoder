import re
s = input()
result = re.sub('[^2]',"",s)
print(result)
#print("2" * input().count("2"))
