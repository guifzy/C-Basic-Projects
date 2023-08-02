#include <stdio.h>

int main()
{
    int matriz[2][3] = {{1, 2, 3},
                        {4, 5, 6}};
    // int len = sizeof(array) / sizeof(array[0]);
    int linha, coluna;

    printf("\nInforme a linha da matriz: ");
    scanf("%d", &linha);
    printf("\nInforme a coluna da matriz: ");
    scanf("%d", &coluna);

    printf("%d \n", matriz[linha][coluna]);
    /*
    printf("\nArray resultante:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    */

    return 0;
}
