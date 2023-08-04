#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int a=5, b=6, c=7;
int v[10] = {0,10,20,30,40,50,60,70,80,90};
int *pt1, *pt2, *pt3;

pt1 = &a; // recebe espaço memoria de a 
pt2 = &b; // recebe espaço memoria de b
pt3 = &c; // recebe espaço memoria de c
pt1 = pt2; // pt1 agora recebera o valor de pt2, ou seja, &b 
pt3 = pt2; // pt3 agora recebera o valor de pt2, ou seja, &b
*pt2 = *pt3 + 1000; // apontado de pt2 será igual ao apontado de pt3 + 1000, 1006
pt1 = v; // pt1 agora recebe o valor do array 'v' no índice[0]
pt1 = pt1 + 1; // pt1 agora será o valor de v no índice[1]

for (int k=0; k<2; k++) { 
*pt1 = *pt1 /2; /* o apontado de pt1 agora será igual ao seu valor dividido por 2
com isso se repetindo duas vezes */

pt1 = pt1 + 4;  /* pt1 vai andar 4 posições no array saindo de v[1] = 5 para v[5] = 25 e 
terminando em v[9] = 90 */
}

printf("%d ", c);

/*
for (int i = 0; i < sizeof(v)/sizeof(v[0]); i++)
{
    printf("%d ", pt1[i]);
}
printf("\n");
*/
return 0;
}
