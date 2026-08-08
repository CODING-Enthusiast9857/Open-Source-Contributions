num = input("Enter a number: ");
original = num;
reverse = 0;

while num > 0
    digit = mod(num, 10);
    reverse = reverse * 10 + digit;
    num = floor(num / 10);
end

if original == reverse
    fprintf("%d is a palindrome number.\n", original);
else
    fprintf("%d is not a palindrome number.\n", original);
end