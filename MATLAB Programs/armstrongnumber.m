num = input("Enter a number: ");

original = num;
sum = 0;
digits = length(num2str(num));

while num > 0
    digit = mod(num, 10);
    sum = sum + digit^digits;
    num = floor(num / 10);
end

if sum == original
    fprintf("%d is an Armstrong number.\n", original);
else
    fprintf("%d is not an Armstrong number.\n", original);
end