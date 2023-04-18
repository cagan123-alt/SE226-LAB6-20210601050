result = 0
userInput = int(input("Enter a number: "))
def calculateResult(n):
    global result

    if n == 0:
        return

    term = (-1) ** (n+1) / n

    result += term

    calculateResult(n-1)

calculateResult(userInput)
print("The result is:", result)