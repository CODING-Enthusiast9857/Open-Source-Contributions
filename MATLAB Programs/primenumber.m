num = input("Enter a positive integer: ");

if num <= 1
    fprintf("%d is not a prime number.\n", num);
else
    isPrime = true;

    for i = 2:floor(sqrt(num))
        if mod(num, i) == 0
            isPrime = false;
            break;
        end
    end

    if isPrime
        fprintf("%d is a prime number.\n", num);
    else
        fprintf("%d is not a prime number.\n", num);
    end
end