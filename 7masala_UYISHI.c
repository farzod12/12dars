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
    printf("n ga son krting : ");
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    { a[i]=irand(1,15);
    printf(" %4d",a[i]);
    }
    printf( "\n____\n");
    for ( int j=0;j<n;j++){
    
        printf("%5d",a[j]*2);
    }
    free(a);
    return 0;
}