a = int(input("enter the number of rows in the piramyd"))
for i in range (1,a+1) :
    print(" "* (a-i) + "*"*(2*i-1))
    