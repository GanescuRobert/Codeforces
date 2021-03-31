# https://codeforces.com/problemset/problem/110/A

n = input()
ln=n.count('4')+n.count('7')
print("YES" if ln == 4 or ln == 7 else "NO")
