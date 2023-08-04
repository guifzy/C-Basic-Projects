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
pt1 = pt3; /*pt1 recebe os memos valores de pt3, tanto o seu valor como seu 
apontado(valores de C).*/

pt2 = pt3; /*pt2 recebe os memos valores de pt3, tanto o seu valor como seu 
apontado(valores de C).*/

*pt1 = *pt2 + *pt3; /*o apontado de pt1(agora C), receberá o valor do apontado de 
pt2 + o apontado de pt3, ou seja C = 14*/

pt1 = &v[3]; /*agora pt1 é igual ao espaço de memoria do array 'v' na posição 3*/

for (int k=0; k<3; k++) { 
*pt1 = *pt1 + 1000; /* o apontado de pt1 agora vai ser somado a 1000 com essa operação
se repetindo 3 vezes por conta do laço for */
pt1 = pt1 + 2; /* pt1 agora irá andar duas posições no array com essa operação
se repetindo 3 vezes por conta do laço for, ou seja pt1 vai ser igual a posição
v[3], v[5], v[7] e terminará valendo v[9]*/
}

return 0;
}
