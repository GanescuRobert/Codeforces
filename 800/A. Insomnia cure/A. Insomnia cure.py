# https://codeforces.com/problemset/problem/148/A
import itertools


def multiples(pas, stop):
    return [_ for _ in range(pas, stop+1, pas)]


klmn = [int(input()) for _ in range(4)]
d = int(input())

print(len(set(itertools.chain.from_iterable(
    list(map(multiples, klmn, [d]*4))))))
