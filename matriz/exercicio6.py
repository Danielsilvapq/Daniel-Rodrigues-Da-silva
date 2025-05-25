# Ler o tabuleiro 3x3
tabuleiro = []

print("Digite o estado do tabuleiro (3x3):")
print("Use -1 para sua peça, 0 para casa vazia, 1 para peça do oponente.")

for i in range(3):
    linha = []
    for j in range(3):
        val = int(input(f"Posição [{i}][{j}]: "))
        while val not in [-1, 0, 1]:
            print("Valor inválido! Digite -1, 0 ou 1.")
            val = int(input(f"Posição [{i}][{j}]: "))
        linha.append(val)
    tabuleiro.append(linha)

jogada = None
for i in range(3):
    for j in range(3):
        if tabuleiro[i][j] == 0:
            jogada = (i, j)
            break
    if jogada is not None:
        break

# resultado
if jogada:
    print(f"\nPróxima jogada sugerida: posição linha {jogada[0]}, coluna {jogada[1]}")
else:
    print("\nNão há jogadas possíveis. O tabuleiro está cheio.")
