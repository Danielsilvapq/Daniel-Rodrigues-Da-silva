conjunto1 = [0] * 30
conjunto2 = [0] * 30
intercalado = []  

print("Digite os 30 números do primeiro conjunto (ordenado):")
for i in range(30):
    conjunto1[i] = int(input(f"Conjunto 1 - Número {i+1}: "))

print("\nDigite os 30 números do segundo conjunto (ordenado):")
for i in range(30):
    conjunto2[i] = int(input(f"Conjunto 2 - Número {i+1}: "))

i = j = 0

while i < 30 and j < 30:
    if conjunto1[i] < conjunto2[j]:
        intercalado.append(conjunto1[i])
        i += 1
    else:
        intercalado.append(conjunto2[j])
        j += 1

while i < 30:
    intercalado.append(conjunto1[i])
    i += 1

while j < 30:
    intercalado.append(conjunto2[j])
    j += 1

print("\nVetor intercalado ordenado:")
for num in intercalado:
    print(num, end=" ")
