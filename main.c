#include <stdio.h>

float media(float n, float somma) {
    return somma / n;
}

int main(void) {
    int n = 0, somma = 0;
    printf("digita il numero dei valori: ");
    scanf("%d", &n);
    printf("digita la loro somma: ");
    scanf("%d", &somma);
    printf("media = %.2f", media(n, somma));
}
