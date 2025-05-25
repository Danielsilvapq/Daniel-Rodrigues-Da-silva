alunos = [[0]*4 for _ in range(5)]

# (a) Ler matrícula, média das provas e média dos trabalhos
for i in range(5):
    print(f"Aluno {i+1}:")
    alunos[i][0] = int(input("Número da matrícula: "))
    alunos[i][1] = int(input("Média das provas: "))
    alunos[i][2] = int(input("Média dos trabalhos: "))

    # (b) Calcular nota final (soma das médias)
    alunos[i][3] = alunos[i][1] + alunos[i][2]

# (c) Encontrar matrícula do aluno com maior nota final
maior_nota = alunos[0][3]
matricula_maior = alunos[0][0]

for i in range(1, 5):
    if alunos[i][3] > maior_nota:
        maior_nota = alunos[i][3]
        matricula_maior = alunos[i][0]

# (d) Calcular média aritmética das notas finais
soma_notas = sum(alunos[i][3] for i in range(5))
media_notas = soma_notas / 5

# Resultados
print(f"\nMatrícula do aluno com maior nota final: {matricula_maior}")
print(f"Média aritmética das notas finais: {media_notas:.2f}")
