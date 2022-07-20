#include <stdio.h>
int main(){
    int T,N,K,X,Y;
    printf(":");
    scanf("%d",&T);

    for(int i = 1;i<=T;i++){
        scanf("%d %d %d %d",&N,&K,&X,&Y);
        int Blue_lamps = N-K;

        if(X>Y)
            printf("%d\n",((Blue_lamps*Y)+(K*X)));
        else
            printf("%d\n",N*X);
    }

    return 0;
}