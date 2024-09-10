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
    double sch = 0;
    double sch2 = 0;
    printf("n ga son krting : ");
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = irand(10, 99);
        printf(" %4d", a[i]);
        sch++;
        sch2 += a[i];
    }
    printf("\n\n___________________________\n\n");
    printf("%.1lf", sch2/sch);
        free(a);
    return 0;
}