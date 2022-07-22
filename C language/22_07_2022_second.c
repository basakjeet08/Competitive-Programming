#include <stdio.h>

int main(){

    int X,Y,T;
    printf(":");
    scanf("%d",&T);

    for(int i = 1 ;i<=T;i++){
        scanf("%d %d",&X,&Y);
        X = (X*4)+Y;
        printf("%d\n",X);
    }
    return 0;
}