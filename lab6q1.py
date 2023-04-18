import math

n = int(input("N value: "))
x = int(input("X value: "))

factorial = lambda num: 1 if num == 0 else num * factorial(num - 1)

allNumbers = []

for i in range(1, x + 1):
    term = (n ** i) / factorial(i)
    allNumbers.append(term)

result = 1 + sum(allNumbers)
print("The result is: ", result)