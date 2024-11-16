# Lambda function returning a tuple (addition, multiplication)
calculate = lambda x, y: (x + y, x * y)

result = calculate(3, 5)
print(f"Addition: {result[0]}, Multiplication: {result[1]}")