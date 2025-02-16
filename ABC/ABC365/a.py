y = int(input())
print(365 + (y%4 == 0) - (y%100 == 0) + (y%400 == 0))
