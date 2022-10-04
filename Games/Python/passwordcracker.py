from random import *
user_pass=input("Enter your password : ")
password=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','@']
guess=""

while guess!=user_pass:
   guess=""
   for letter in range(len(user_pass)):
       guess_letter=password[randint(0,36)]
       guess=str(guess_letter)+str(guess)
       print(guess)
print("Your password is",guess)