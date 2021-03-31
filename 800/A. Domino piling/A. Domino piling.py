# https://codeforces.com/problemset/problem/50/A


m, n = input().split(' ')
m, n = int(m), int(n)
m, n = max(m, n), min(m, n)
print(int(m*n/2))
