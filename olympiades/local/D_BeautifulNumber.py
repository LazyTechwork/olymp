def prime_factors(n):
    factors = []
    for i in range(2, int(n ** 0.5) + 1):
        while n % i == 0:
            if i % 2 != 0:
                factors.append(i)
            n //= i
    if n != 1:
        factors.append(n)
    return factors


def find_beauty(a):
    factors = prime_factors(a)
    powers = {i: factors.count(i) for i in factors}
    result = 1
    for i in powers.values():
        result *= (i + 1)
    return result


n = int(input())
beauties = {}
inp = list(sorted(map(int, input().split())))

for i in inp:
    if not (i in beauties.keys()):
        beauties[i] = find_beauty(i)

beauty = max(beauties, key=(lambda key: beauties[key]))
print(beauty, beauties[beauty])
