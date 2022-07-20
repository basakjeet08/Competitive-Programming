#include <stdio.h>
#include <string.h>

int main(){
    int test_cases,N,K;
    scanf("%d",&test_cases);

    for(int i = 1;i<=test_cases;i++){
        scanf("%d %d",&N,&K);

        if(N<K)
            printf("YES\n");
        else
            printf("NO\n");
    }
    

    return 0;
}