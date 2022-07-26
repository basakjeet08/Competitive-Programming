#include <stdio.h>

int main(){
    int T,K,N;
    printf(":");
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&N,&K);
        int A[N];
        int B[N];
        int C[N];
        int count = 0;
        for(int i = 0;i<N; i++){
            scanf("%d",&A[i]);
            B[i] = C[i] = 0;
        }
        for(int i = 0;i<N; i++)
            if(A[i] != (i+1))
                B[(A[i]-1)]++;
            

        for(int i = 0;i<N ; i++)
            if((B[i]>=K) && (A[i] != (i+1)))
                count++;
        printf("%d\n",count);
    }
    return 0;
}