#include <stdio.h>
#include <stdlib.h>

int main() {
    long  i, n;
    printf("Digite o valor de n: ");
    scanf("%ld", &n);
    for (i = 0; n /=10; i++)
    {
    }
    i++;
    printf("%ld", i);
    return 0;
}