def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

V1 = list(range(1, 51))

V2 = []
for num in V1:
    if eh_primo(num):
        V2.append(num)

print("Vetor V1 (1 a 50):")
print(V1)

print("\nVetor V2 (números primos de V1):")
print(V2)
