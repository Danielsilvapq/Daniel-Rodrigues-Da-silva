
numeros = [0] * 100

for i in range(100):
    numeros[i] = int(input(f"Digite o número {i+1}: "))

x = int(input("Digite o valor de x: "))

existe = False
for i in range(100):
    if numeros[i] == x:
        existe = True
        break
1
if existe:
    print(f"O valor {x} existe no conjunto.")
else:
    print(f"O valor {x} não foi encontrado no conjunto.")
