#program to calculate addition, subtraction, multiplication and division of Two numbers
print('Calculator!!')
num1 = float(input("Enter first number: "))
op = input("Enter operator(+|-|*|/): ")
num2 = float(input("Enter second number: "))
if op == "+":
    print(num1 + num2)
elif op == "-":
    print(num1 - num2)
elif op == "*":
   print(num1 * num2)
elif op == "/":
    print(num1 / num2)
else:
   print("Enter a valid input")