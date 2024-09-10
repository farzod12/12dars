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
    {
        a[i] = irand(10, 99);
        printf(" %4d", a[i]);
    }
    printf("\n\n___________________________\n\n");
    for(int i = 0; i<n;i++){
     for( int j =i+1;j<n;j++){
        int temp;
       if(a[i]>a[j] ){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
     }   
    }
    for (int i=0;i<n;i++){
        printf("%4d", a[i]);
    }
    free(a);
    return 0;
}