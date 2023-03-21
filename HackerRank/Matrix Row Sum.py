n,m=map(int,input().split())
x=[]
for i in range(n):
    a=list(map(int,input().split()))
    x.append(a)
s=0
for i in range(n):
    for j in range(len(x[i])):
        s=s+x[i][j]
    print(s)
    s=0
