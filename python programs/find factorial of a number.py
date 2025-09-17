a = int(input("enter the number to find the factorial of : "))
product =1
for i in range(1,a+1):
    product *= i
print(f"the factorial of the number : {a} is {product}")