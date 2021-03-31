#https://codeforces.com/problemset/problem/546/A

arr=input().split(' ')
k,n,w=[int(_) for _ in arr]
cost=0
for i in range(1,w+1):
    cost+=i*k

print(cost-n if n<cost else 0 )