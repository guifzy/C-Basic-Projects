#include <stdio.h>
#include<ctype.h>

int main(){

    printf("\nWelcome to the Celsius <-> Farenheit!");

    char unit;
    float temperature;

    printf("\nType (F) for Farenheit and (C) for Ceusius: ");
    
    int x = 1;
    while (x)
    {
        scanf("%c", &unit);
        unit = toupper(unit);

        if (unit == 'F')
        {
            printf("\nEnter the temperature in Farenheit: ");
            scanf("%f", &temperature);

            temperature = ((temperature - 32) * 5) / 9;

            printf("\nYour temperature in Celsius is: %.2f °C.", temperature);

            break;
        }else if (unit == 'C')
        {
            printf("\nEnter the temperature in Celsius: ");
            scanf("%f", &temperature);

            temperature = (temperature * 9 / 5) + 32;

            printf("\nYour temperature in Farenheit is: %.2f °F.", temperature);

            break;
        }else 
        {
            printf("%c is not a valid unit, please try it again: \n", unit);
        }
    }
    


    return 0;
}