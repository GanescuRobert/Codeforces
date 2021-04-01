# https://codeforces.com/problemset/problem/61/A


n1, n2 = input(), input()

for indx,_ in enumerate(n1):
    print('0' if n1[indx] == n2[indx] else '1', end='')
