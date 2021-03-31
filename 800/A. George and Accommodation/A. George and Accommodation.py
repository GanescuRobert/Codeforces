#https://codeforces.com/problemset/problem/467/A

rooms = int(input())

ans = 0;
for _ in range(rooms):
    p,q = [int(_) for _ in input().split(' ')]
    ans += 1 if q-p>1 else 0
print(ans)