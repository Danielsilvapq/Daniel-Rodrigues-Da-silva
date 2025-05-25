numeros = [0] * 100

for i in range(100):
    numeros[i] = int(input(f"Digite o número {i+1}: "))

soma = 0
for i in range(100):
    soma += numeros[i]
media = soma / 100

soma_desvios = 0
for i in range(100):
    soma_desvios += abs(numeros[i] - media)

desvio_medio = soma_desvios / 100


print(f"O desvio médio do conjunto é: {desvio_medio:.2f}")
