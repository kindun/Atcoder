t = input()
for _ in range(int(t)):
    n, w = map(int, input().split())
    case = list(map(int, input().split()))

    eq_class_sum = [0] * (2 * w)
    for i in range(n):
       eq_class_sum[i%(2*w)] += case[i]
    
    MIN = float('inf')
    current_sum = sum(eq_class_sum[:w])
    for i in range(2*w):
        MIN = min(MIN, current_sum)
        current_sum -= eq_class_sum[(i) % (2*w)]
        current_sum += eq_class_sum[(i+w) % (2*w)]
   
    print(MIN)
        
        
    
    



        





