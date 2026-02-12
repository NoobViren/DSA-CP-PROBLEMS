n = int(input("enter a number"))
flag = 0
if n==1:
   print("neither prime nor composite")
else:
 for i in range(2,n):
    if n%i==0:
     flag = 1
     break
 if flag==1 :
   print("composite")
 else : print("prime")
