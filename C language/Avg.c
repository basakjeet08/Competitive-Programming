#include <stdio.h>

int main(){
    int N,K,T,V;
    printf(":");
    scanf("%d",&T);

    while(T--){
        scanf("%d %d %d",&N,&K,&V);
        int A[N];
        int sum = 0;
        for(int i = 0 ; i<N ; i++)
            scanf("%d",&A[i]);
        
        for(int i = 0;i<N;i++)
            sum = sum + A[i];
        int cal = ((N+K)*V - sum);

        if((cal>0) && (cal%K==0))
            printf("%d \n",(cal/K));
        else if((cal == 0) && (cal%K==0))
            printf("0\n");
        else
            printf("-1");

    }
}