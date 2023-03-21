n=list(map(int,input().split()))
sum=0
for i in range(len(n)):
    sum=sum+n[i]
k=100*101/2
k=k-sum
print(int(k))
