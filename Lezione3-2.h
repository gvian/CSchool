#include "stdio.h"
#include "stdlib.h"

int lezione32() {
    int n, i, arr[30];

    do {
        system("cls");
        printf("Quanti numeri? ");
        scanf("%d", &n);
    } while (n < 1 || n > 30);

    for (i = 0; i < n; i++) {
        printf("Inserisci il #%d numero: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n + 1; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
