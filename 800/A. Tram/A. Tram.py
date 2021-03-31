#https://codeforces.com/problemset/problem/116/A

stops = int(input())

max_capacity=0
capacity = 0
for _ in range(stops):
    go_out,go_in=[int(_) for _ in input().split(' ')]
    capacity+=go_in-go_out
    max_capacity=max(max_capacity,capacity)

print(max_capacity)