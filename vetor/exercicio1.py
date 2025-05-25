
notas = [0] * 10  

for i in range(10):
    notas[i] = float(input(f"Digite a nota do aluno {i+1}: "))

soma = 0
for i in range(10):
    soma += notas[i]
media = soma / 10

acima_da_media = 0
for i in range(10):
    if notas[i] > media:
        acima_da_media += 1

print(f"\nMédia da turma: {media:.2f}")
print(f"Número de alunos com nota acima da média: {acima_da_media}")
