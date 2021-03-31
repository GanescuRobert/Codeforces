# https://codeforces.com/problemset/problem/705/A

states = ['I hate it', 'I love it', 'I hate that ', 'I love that ']

layers = int(input())

if layers == 1:
    print(states[layers-1])
elif layers == 2:
    print(states[2]+states[layers-1])
else:
    strr = states[2]+states[3]
    ans = (strr*int(layers/2) + states[0]) if layers % 2 else (strr*int(layers/2-1) +states[2]+ states[1] )
    print(ans)
