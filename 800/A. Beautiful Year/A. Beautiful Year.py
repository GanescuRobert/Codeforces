#https://codeforces.com/problemset/problem/271/A

y= int(input())
y+=1
while len(set([_ for _ in str(y)]))<4:
    y+=1
print(y)

