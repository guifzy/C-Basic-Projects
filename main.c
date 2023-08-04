#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.7}; /* declaração de um array do tipo float */
    float *f; /* declaração de um ponteiro do tipo float */
    int i; /* declaração de uma variavel do tipo inteiro*/
    f = vet; /* ponteiro f igual ao vetor 'vet' na posição[0] */

    printf("contador / valor / valor / endereco/ endereco"); /* imprime a legenda dos
    valores a seguir */
    
    for(i = 0 ; i <= 4 ; i++){/* laço for para percorrer os valores de 0 ate 4*/
        printf("\ni = %d",i); /* imprime o valor do index 'i', que será incrementado
        com +1 até 4 por conta do laço for */
        printf(" vet[%d] = %.1f",i, vet[i]); /* imprime o valor de cada índice do vetor
        com o uso da variavel 'i' para percorrer todos os índices do vetor */
        printf(" *(f + %d) = %.1f",i, *(f+i)); /* imprime o apontado de f, que tem
        valor igual a cada posição do vetor devido ao incremento de 'i' */
        printf(" &vet[%d] = %X",i, &vet[i]); /* imprime o endereço de memoria de cada
        índice do array em hexadecimal */
        printf(" (f + %d) = %X\n",i, f+i); /* imprime o endereço de memoria de cada 
        índice do array usando o ponteiro 'f', que tem valor igual ao índice[0] do
        array incrementado com +1, de 0 até 4*/
    }
    system ("pause");
}