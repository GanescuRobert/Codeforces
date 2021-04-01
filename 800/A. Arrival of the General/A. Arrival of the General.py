# https://codeforces.com/problemset/problem/144/A

soliders = int(input())
heights = [int(_) for _ in input().split(' ')]
max_height, min_height = max(heights), min(heights)

indx_max = heights.index(max_height)
indx_min = len(heights)-1-heights[::-1].index(min_height)

ans = -1 if indx_min<indx_max else 0
ans += indx_max + (len(heights)-1-indx_min)

print(ans)
