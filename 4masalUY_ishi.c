#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int irand(int a, int b)
{
    return a + rand() % (b - a + 1);
}
int main()
{
    system("cls");
    int a;
    printf(" a son krtiting :");
    scanf("%d", &a);
    int *n = malloc(a * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < a; i++)
    {

        n[i] = irand(10, 100);
        printf("%4d", n[i]);
    }
    printf("\n_____\n");
    for (int j = a-1; j >= 0; j--)
    {
        printf("%4d", n[j]);
    }
    free(n);
    return 0 ;
}
