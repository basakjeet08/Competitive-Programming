#include <stdio.h>
int main(){
    int T;
    long int A,B,N;
    printf(":");
    scanf("%d",&T);

    for(int i = 1 ;i<=T;i++){
        scanf("%ld %ld %ld",&A,&B,&N);
        int num = N;
        int flag=1;
        while(num>=N){
            if((num%A==0)&&(num%B!=0)){
                printf("%d\n",num);
                flag = 0;
                break;
            }
            num++;
        }
        if(flag)
            printf("-1\n");

    }
    return 0;
}