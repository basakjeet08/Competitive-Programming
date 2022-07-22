#include <stdio.h>

int main(){
    int T;
    long int A,B,N;
    printf(":");
    scanf("%d",&T);

    while(T-->0){
        scanf("%ld %ld %ld",&A,&B,&N);
        if(A%B==0)
            printf("-1\n");
        else if(A%B!=0){
            if(N%A!=0){
                N = N/A;
                N = (N+1)*A;
            }
            if((N%A==0)&&(N%B !=0))
                printf("%ld\n",N);
            else
                printf("%ld\n",(N+A));
        }
    }
}