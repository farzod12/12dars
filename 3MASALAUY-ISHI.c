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
    int n;
    printf("n ga son krtiting : ");
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
      srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
    
         a[i] = irand (10, 80);
        printf("%4d", a[i]);
    }



    int min = INT_MAX;
    printf("\n______\n");
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf(" min=%d", min);
    free(a);
    return 0;
}