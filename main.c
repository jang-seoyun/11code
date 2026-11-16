#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int sum = 0;
    int *ptr = grade;

    for (i = 0; i < 5; i++)
    {
        printf("input value (%i) : ", i);
        scanf("%d", &grade[i]);
    }

    
    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %i\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    printf("average : %d\n", sum / 5);

    return 0;
}
