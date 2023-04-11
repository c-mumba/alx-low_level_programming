#include <stdio.h>

int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    int **ptr1;
    unsigned int len = (width * height)  + 1, i, a, b;
    ptr1 = (int **)malloc(len);

    if (ptr1 == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < len; i++)
    {
        ptr1[i] = 0;
        printf("ptr1[%i] = %i\n",i,ptr1[0][1]);
    }
    printf("ptr[1] = %i && len = %i\n",ptr1[1][1],len);

    return (ptr1[width][height]);
}

