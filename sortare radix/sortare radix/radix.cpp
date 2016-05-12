#include <stdio.h>
#include<stdlib.h>

int min = 0, nr = 0, array[100] = {0}, array1[100] = {0};
 
void main()
{
    int k, i, j, temp, t, n;
 
    printf("Introduceti numarul de elemente din vector: ");
    scanf("%d", &nr);
    printf("Introduceti elementele: ");
    for (i = 0; i < nr; i++)
    {
        scanf("%d", &array[i]);
        array1[i] = array[i];
    }
    for (k = 0; k < 3; k++)
    {    
        for (i = 0; i < nr; i++)
        {
            min = array[i] % 10;        // To find minimum lsd 
            t = i;
            for (j = i + 1; j < nr; j++)    
            {
                if (min > (array[j] % 10))
                {
                    min = array[j] % 10; 
                    t = j;
                }
            }
            temp = array1[t];
            array1[t] = array1[i];
            array1[i] = temp;
            temp = array[t];
            array[t] = array[i];
            array[i] = temp;
 
        }
        for (j = 0; j < nr; j++)        //to find MSB 
            array[j] = array[j] / 10;
    }
    printf("Vectorul sortat este: ");
    for (i = 0; i < nr; i++)
        printf("%d ", array1[i]);
}



