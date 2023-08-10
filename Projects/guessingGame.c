#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randNum = (rand() % 100) + 1;
    int guess;
    char start;
    int tries = 1;

    printf("\nBem vindo ao jogo da adivinhacao!");
    printf("\nAperte enter para iniciar");
    scanf("%c", &start);

    do
    {
        printf("\nAdivinhe o numero: ");
        scanf("%d", &guess);
        if (randNum < guess)
        {
            printf("\nO numero e menor que %d ", guess);

        }else if (randNum > guess)
        {
            printf("\nO numero e maior que %d ", guess);

        }else if (guess == randNum)
        {
            printf("\nParabens! Voce encontrou o numero em %d tentativas.", tries);
                          
        }
    tries++;

    } while (guess != randNum);

    return 0;

}
