
vetor = [0] * 50


for i in range(50):
    vetor[i] = int(input(f"Digite o elemento {i+1}: "))

print("\nElementos na ordem contrária:")
for i in range(49, -1, -1):  
    print(vetor[i])
