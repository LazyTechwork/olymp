import math

n, k = map(int, input().split())
result = 0 if n >= 5 and k >= 5 else (math.factorial(n) - math.factorial(k)) % 10
print(result)