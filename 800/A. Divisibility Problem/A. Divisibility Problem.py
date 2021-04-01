# https://codeforces.com/problemset/problem/1328/A


for _ in range(int(input())):
    a,b=[int(_) for _ in input().split(' ')]
    if a%b==0:
        print(0)
    elif a<b:
        print(b-a)
    elif a>b:
        print(b-a%b) 


