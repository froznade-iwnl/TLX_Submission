s = input()
x = 0
for i in s:
    if(i.isupper()):
        x += 1

if(x > len(s)-x):
    print(s.upper())
else:
    print(s.lower())