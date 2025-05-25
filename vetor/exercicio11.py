SALARIO_MINIMO = 1518.00


vetNumOp = [0] * 15         # Números dos operários
vetNumPecas = [0] * 15      # Quantidade de peças produzidas
vetSexo = [0] * 15          # Sexo (1=masculino, 2=feminino)
vetSalarios = [0.0] * 15    # Salários calculados

for i in range(15):
    print(f"\nOperário {i + 1}:")
    vetNumOp[i] = int(input("Número do operário: "))
    vetNumPecas[i] = int(input("Quantidade de peças fabricadas: "))
    vetSexo[i] = int(input("Sexo (1=Masculino, 2=Feminino): "))

    pecas = vetNumPecas[i]
    if pecas <= 30:
        salario = SALARIO_MINIMO
    elif 31 <= pecas <= 35:
        extra = (pecas - 30) * (SALARIO_MINIMO * 0.03)
        salario = SALARIO_MINIMO + extra
    else:  # mais de 35 peças
        extra = (pecas - 30) * (SALARIO_MINIMO * 0.05)
        salario = SALARIO_MINIMO + extra

    vetSalarios[i] = salario

print("\n--- RELATÓRIO DOS OPERÁRIOS ---")
total_folha = 0
for i in range(15):
    print(f"Operário Nº {vetNumOp[i]} | Peças: {vetNumPecas[i]} | Salário: R${vetSalarios[i]:.2f}")
    total_folha += vetSalarios[i]

print(f"\nTotal da folha de pagamento: R${total_folha:.2f}")
