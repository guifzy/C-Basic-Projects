#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            

        }
        
    }
    
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("%d %d ", array[0], array[10]);

    

}


int main()
{
    int array [] = {1,6,5,4,8,7,3, 0,9,10,2};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);
    printArray(array, size);

    return 0;
}
