n,m=map(int,input().split())
x=[]
for i in range(n):
    a=list(map(int,input().split()))
    x.append(a)
y=[]
for i in range(n):
    a=list(map(int,input().split()))
    y.append(a)

for i in range(n):
    for j in range(m):
        print(x[i][j]+y[i][j],end=" ")
    print()
    
