
numeros = [0] * 100

for i in range(100):
    numeros[i] = int(input(f"Digite o número {i+1}: "))

menor = numeros[0]
maior = numeros[0]

for i in range(1, 100):
    if numeros[i] < menor:
        menor = numeros[i]
    if numeros[i] > maior:
        maior = numeros[i]

amplitude = maior - menor

print(f"A amplitude total do conjunto é: {amplitude}")
