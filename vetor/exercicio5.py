
numeros = [0] * 100

for i in range(100):
    numeros[i] = int(input(f"Digite o número {i+1}: "))

soma = 0
for i in range(100):
    soma += numeros[i]

media = soma / 100

print(f"A média aritmética do conjunto é: {media:.2f}")
