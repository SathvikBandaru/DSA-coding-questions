n=int(input())
a=list(map(int,input().split()))
y=0
for i in range(n):
    for j in range(n):
        if(a[i]==a[j]):
            y=y+1
    if(y<2):
        print(a[i],end=" ")
    y=0
