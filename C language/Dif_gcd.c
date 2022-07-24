#include <stdio.h>

int main(){
    int N,T;
    long int M;
    printf(":");

    scanf("%d",&T);

    while(T-->0){
        scanf("%d %ld",&N,&M);

        while(M%N !=0){
            if(M%N>N/2)
                N++;
            else if(M%N<N/2)
                M = M-(M%N);
        }
        printf("%d %ld\n",N,M);
    }
}