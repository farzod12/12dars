#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    system("cls");
    int n;
    int count=0;
    printf( " n ga son krtiting : ");
       scanf("%3d",&n);
    int *sonlar=malloc(n*sizeof(int));
    for ( int i=1;i<=n;i++){

        printf("%2d\n",i);
    count+=i;

    }
    printf("sonlat yigindisi=%d\n",count); 

    free(sonlar);
    return 0;
}