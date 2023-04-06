#include <stdio.h>

int main() {
    int a, b, conta = 0;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        int x = 1;
        if (i <= 1) {
            x = 0;
        }
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                x = 0;
                break;
            }
        }
        if (x) {
            conta++;
        }
    }

    printf("Existem %d numeros primos entre %d e %d.\n", conta, a, b);

    return 0;
}