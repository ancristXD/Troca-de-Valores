#include <stdio.h>

int main() {
    // Declaração das variáveis
    int A, B, Temp;

    // Leitura dos valores de A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Troca dos valores
    Temp = A;
    A = B;
    B = Temp;

    // Exibe os valores trocados
    printf("Valores trocados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
