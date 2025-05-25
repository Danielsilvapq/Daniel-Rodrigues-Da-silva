matriz = [[0 for _ in range(4)] for _ in range(4)]

contador = 0

print("Digite os valores para a matriz 4x4:")
for i in range(4):
    for j in range(4):
        matriz[i][j] = int(input(f"Elemento [{i}][{j}]: "))
        if matriz[i][j] > 10:
            contador += 1

print(f"\nQuantidade de valores maiores que 10: {contador}")
