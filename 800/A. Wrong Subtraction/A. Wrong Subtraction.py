# https://codeforces.com/problemset/problem/977/A

input_data = input().split(' ')
n, k = [int(_)for _ in input_data]

for _ in range(k):
    n = n-1 if n % 10 else n/10

print(int(n))
