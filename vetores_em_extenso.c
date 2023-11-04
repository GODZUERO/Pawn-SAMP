#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b, n,  c=0, numa=0, numb=0;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    a = (int*) malloc(n * sizeof(int));
    b = (int*) malloc(n * sizeof(int));
    printf("Digite os valores do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Digite os valores do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }   
    for(int j=0; j<n ; j++) {
        numa = numa * 10 + a[j];
    }
    
    for(int j=0; j<n; j++) {
        numb = numb * 10 + b[j];
    }
c = numa + numb;
    printf("\nnúmero a: %d\n", numa)
    printf("\nnúmero b: %d\n", numb);
    printf("\nnúmero c: %d\n", c);


    return 0;
}
