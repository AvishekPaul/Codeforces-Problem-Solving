n = int(input())
x=0
for i in range(n):
    cha = input()
    if cha=='X++' or cha=='++X':
        x=x+1
    elif cha=='X--' or cha=='--X':
        x=x-1
print(x)
