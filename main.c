#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int maiorMenor (int *array, int tam, int *min, int *max )
{
    for (int i = 1; i < tam; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];

        }else if (array[i] > *max)
        {
            *max = array[i];
        }
        
    }
    
}

int main ()
{
    int min, max;
    int vet [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    maiorMenor(vet, tamanho, min, max);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("maior: %d\n", max);
    printf("menor: %d\n", min);
    
    return 0;
}