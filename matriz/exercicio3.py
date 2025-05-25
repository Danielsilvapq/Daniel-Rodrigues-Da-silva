matriz = [[0 for _ in range(5)] for _ in range(5)]

for i in range(5):
    matriz[i][i] = 1

print("Matriz 5x5 com 1 na diagonal principal:")
for linha in matriz:
    print(linha)
