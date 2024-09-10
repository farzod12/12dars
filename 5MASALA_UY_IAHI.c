#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int irand(int a, int b)
{
    return a + rand() % (b - a + 1);
}
int main(){
    system("cls");
    int n ;
    int sch = 0;
    printf(" n ga son kriting :");
    scanf("%d",&n);
    int *a=calloc(n,sizeof(int));
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=irand(10,99);
        printf("%4d",a[i]);
    }
    for ( int j=0;j<n;j++){
        if ( a[j] % 2==0){
            sch ++;
        }
    }
    
    printf("\njuftlar soni %d\n ta", sch);
    free(a);
    return 0;
}