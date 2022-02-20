n = int(input())
sum=0
i=1

for i in range(n+1):
    j=((-1)**i)*i
    sum+=j
    
    
print(sum)