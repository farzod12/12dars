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
    int sum=0;
    printf("n ga son krting : ");
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    { a[i]=irand(-20,20);
    printf(" %4d",a[i]);
    }
    printf( "\n____\n");
    for ( int j=0;j<n;j++){
    if ( a[j]>0){
    sum +=a[j];
    }
    }
    printf( "%d",sum);
    free(a);
    return 0;
}