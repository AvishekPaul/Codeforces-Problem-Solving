s = input()
count=0

for i in range(len(s)):
    if s[i]==s[i+1]:
        if s[i]=='l':
            count+=1
        if count==2:
            continue
        t = s.replace('s[i','')
        print(t, end='')
    if i==len(s):
        break