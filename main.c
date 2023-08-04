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
pt2 = pt1; // pt2 agora recebe os valores de pt1, ou seja, pt2 agora é igual a &a
*pt3 = *pt2 + 2000; // o apontado de pt3 será igual ao apontado de pt2 + 2000, 2005
pt1 = &v[8]; // pt1 agora recebe o espaço de memoria do vetor 'v' na posição 8, 80

for (int k=0; k<2; k++) { 
*pt1 = *pt1 - 5; /* o apontado de pt1 agora será igual a -5 com isso se repetindo duas
veses. */

pt1 = pt1 - 3; /* pt1 agora será decrementado por -3, logo, pt1 que antes era igual ao
espaço de memoria de v[8] agora será v[8] = 75, v[5] = 45 e terminará em v[2] = 20 */
}

return 0;
}
