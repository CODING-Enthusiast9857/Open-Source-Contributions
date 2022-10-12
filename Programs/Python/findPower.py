def power(x,n):
  if n==0:
    return 1
  smallpower=power(x,n//2)
  if n%2==0:
    return smallpower*smallpower
  else:
    return x*smallpower*smallpower

base = int(input("Enter the base"))
exponent = int(input("Enter the exponent"))
print(power(base,exponent))