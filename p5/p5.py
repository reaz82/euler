isDivisibleByRange = 1
step = 2520
num = 0
while(isDivisibleByRange):
    num += step
    for i in range(1, 21):
        if (num % i):
            isDivisibleByRange = 0
            print((str(num) + " is not divisible by " + str(i)))
            break
    if (isDivisibleByRange):
        print(("Answer: " + str(num)))
        break
    else:
        isDivisibleByRange = 1
