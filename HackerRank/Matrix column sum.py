n,m=map(int,input().split())
x=[]
for i in range(n):
    a=list(map(int,input().split()))
    x.append(a)
s=0
for i in range(m):
    for j in range(n):
        s=s+x[j][i]
    print(s)
    s=0
