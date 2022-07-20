#include <stdio.h>
int main(){
    int T,N,M;
    printf(":");
    scanf("%d",&T);

    for(int i = 1;i<=T;i++){
        scanf("%d %d",&N,&M);
        int left = 0;

        if((N%2==0)&&(M%2==0))
            printf("0 \n");
        else if((N%2==0)&&(M%2!=0))
            printf("%d \n",N);
        else if((N%2!=0)&&(M%2==0))
            printf("%d \n",M);
        else
            printf("%d \n",(M+N-1));

    }

    return 0;
}