strin = input()

stri = strin.lower()



s = stri.replace('a','')
t = s.replace('e','')
u = t.replace('i','')
v = u.replace('o','')
w = v.replace('u','')
x = w.replace('y','')


y = '.'

for i in range(len(x)):
    z=y+x[i]
    print(z, end = '')

