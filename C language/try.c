#include <stdio.h>
int main(){
    int X,Y,T,N,R;
    printf(":");
    scanf("%d",&T);

    for(int i = 1 ;i<=T;i++){
        scanf("%d %d %d %d",&X,&Y,&N,&R);
        int pre_bur = 0;
        int flag = 1;
        while(flag<=N){
            int sum = pre_bur*Y + (N-pre_bur)*X;
            if(R>=sum)
                pre_bur++;
            else{
                pre_bur--;
                break;
            }      
            flag++;
        }
        if(pre_bur<0)
            printf("-1\n");
        else
            printf("%d %d \n",(N-pre_bur),pre_bur);

    }
    return 0;
}