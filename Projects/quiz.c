#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. What year did the C language debut?: ",
                            "2. Who is credited with creating C?:",
                            "3. What is the predecessor of C?: "};
                            
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                          "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                          "A. Objective C", "B. B", "C. C++", "D. C#"};
                          
    char answers[] = {'B', 'A', 'B'};        

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        scanf("%c", &guess);
        scanf("%*c");       
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }else
        {
            printf("Incorrect!\n");
        }
      
    }

    printf("Final Score: %d/%d", score, size);
    
    return 0;
}
