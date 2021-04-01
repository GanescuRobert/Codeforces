#https://codeforces.com/problemset/problem/266/B


n,t= [int(_) for _ in input().split(' ')]

def first_try():
    s =[ _ for _ in reversed(input())]
    skip=False

    for _ in range(t):
        for indx,child in enumerate(s):

            if skip==True:
                skip=False
                continue            
            if indx!=len(s)-1 and child=='G' and s[indx+1]=='B':
                s[indx],s[indx+1]=s[indx+1],s[indx]
                skip=True

    return ''.join( _ for _ in reversed(s) )

def second_try():
    s =input()
    for _ in range(t):
        s=s.replace('BG','GB')
    return s
# print(first_try())
print(second_try())


