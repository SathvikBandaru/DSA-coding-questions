def reverse(a,n):
    if(n<=0):
        return
    print(a[n-1],end=" ")
    reverse(a,n-1)
    
n=int(input())
a=list(map(int,input().split()))
reverse(a,n)
