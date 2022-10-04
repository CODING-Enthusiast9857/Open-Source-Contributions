def swap(a,b):
	print("inside before l1 =",a," l2 =",b)
	a,b=b,a
	print("inside after l1 =",a," l2 =",b)

l1,l2=[1,2,3,4,5],[7,5,8,4]
print("before l1 =",l1," l2 =",l2)
swap(l1,l2)
print("after l1 =",l1," l2 =",l2)