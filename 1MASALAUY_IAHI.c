#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    system("cls");
    int n;
    printf( " n ga son krtiting : ");
       scanf("%3d",&n);
    int *sonlar=malloc(n*sizeof(int));
    for ( int i=0;i<n;i++){
        printf("%2d",i);
        
    }
    free(sonlar);
    return 0;
}