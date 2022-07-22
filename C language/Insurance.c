#include <stdio.h>

int main(){

    int X,Y,T;
    printf(":");
    scanf("%d",&T);

    for(int i = 1 ;i<=T;i++){
        scanf("%d %d",&X,&Y);

        if(X<=Y)
            printf("%d\n",X);
        else   
            printf("%d\n",Y);
    }
    return 0;
}