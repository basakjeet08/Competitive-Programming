#include <stdio.h>
int main(){
    int T,N,K,M;
    printf(":");
    scanf("%d",&T);

    for(int i = 1;i<=T;i++){
        scanf("%d %d %d",&N,&K,&M);
        int total = K*M;
        int rem = N%total;
        N = N/total;
        if(rem==0)
            printf("%d \n",N);
        else
            printf("%d\n",(N+1));
    }

    return 0;
}