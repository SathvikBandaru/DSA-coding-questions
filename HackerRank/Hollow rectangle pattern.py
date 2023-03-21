w,l=map(int,input().split())
for i in range (l):
    for j in range (w):
        if(j==0 or j==w-1):
            print("*",end="")
        elif(i==0 or i==l-1):
            print("*",end="")
        else:
            print(" ",end="")
    print()
        
