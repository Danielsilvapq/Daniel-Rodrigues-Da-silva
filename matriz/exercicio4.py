respostas = [['' for _ in range(10)] for _ in range(5)]

gabarito = ['' for _ in range(10)]

resultado = [0 for _ in range(5)]

# Leitura do gabarito
print("Digite o gabarito (respostas de a a d):")
for i in range(10):
    gabarito[i] = input(f"Questão {i + 1}: ").lower()

for aluno in range(5):
    print(f"\nDigite as respostas do Aluno {aluno + 1}:")
    for questao in range(10):
        respostas[aluno][questao] = input(f"Resposta da questão {questao + 1}: ").lower()

for aluno in range(5):
    for questao in range(10):
        if respostas[aluno][questao] == gabarito[questao]:
            resultado[aluno] += 1

print("\nResultado - Pontuação dos Alunos:")
for aluno in range(5):
    print(f"Aluno {aluno + 1}: {resultado[aluno]} pontos")
