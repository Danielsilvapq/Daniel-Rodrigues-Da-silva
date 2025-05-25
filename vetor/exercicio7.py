import math

numeros = [0] * 100

for i in range(100):
    numeros[i] = int(input(f"Digite o número {i+1}: "))

soma_quadrados = 0
for i in range(100):
    soma_quadrados += numeros[i] ** 2

raiz_media_quadratica = math.sqrt(soma_quadrados / 100)

print(f"A raiz média quadrática do conjunto é: {raiz_media_quadratica:.2f}")
