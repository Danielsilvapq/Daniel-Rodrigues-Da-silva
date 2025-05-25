def eh_valido_grupo(grupo):
    return sorted(grupo) == list(range(1, 10))

def verificar_linhas(matriz):
    for linha in matriz:
        if not eh_valido_grupo(linha):
            return False
    return True

def verificar_colunas(matriz):
    for col in range(9):
        coluna = [matriz[linha][col] for linha in range(9)]
        if not eh_valido_grupo(coluna):
            return False
    return True

def verificar_blocos(matriz):
    for bloco_linha in range(0, 9, 3):
        for bloco_coluna in range(0, 9, 3):
            bloco = []
            for i in range(3):
                for j in range(3):
                    bloco.append(matriz[bloco_linha + i][bloco_coluna + j])
            if not eh_valido_grupo(bloco):
                return False
    return True

def verificar_sudoku(matriz):
    return (
        verificar_linhas(matriz) and
        verificar_colunas(matriz) and
        verificar_blocos(matriz)
    )

# --- EXEMPLO DE USO ---
# Matriz válida de Sudoku (preencha com a sua ou use esta como teste)
matriz_sudoku = [
    [5,3,4,6,7,8,9,1,2],
    [6,7,2,1,9,5,3,4,8],
    [1,9,8,3,4,2,5,6,7],
    [8,5,9,7,6,1,4,2,3],
    [4,2,6,8,5,3,7,9,1],
    [7,1,3,9,2,4,8,5,6],
    [9,6,1,5,3,7,2,8,4],
    [2,8,7,4,1,9,6,3,5],
    [3,4,5,2,8,6,1,7,9]
]

if verificar_sudoku(matriz_sudoku):
    print("A matriz é uma solução válida de Sudoku!")
else:
    print("A matriz NÃO é uma solução válida de Sudoku.")
