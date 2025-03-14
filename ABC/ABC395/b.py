n = int(input())

a = [['.']*n for _ in range(n)]
#for k in range(n):
#  for i in range(k,n-k,1):
#    for j in range(k,n-k,1):
#      if (k+1)%2 ==0:
#        a[i][j] = '.'
#      else:
#        a[i][j] = '#'
    

#for i in range(n):
#  print(''.join(a[i]))

for i in range(n):
  j = n-1-i
  if i%2 != 0:

 
