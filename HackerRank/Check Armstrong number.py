def arm(n):
    s=n
    l=0
    while(s>0):
        k=s%10
        l=l+k*k*k
        s=s//10
    if(l==n):
        print("Yes")
    else:
        print("No")

n=int(input())
arm(n)
