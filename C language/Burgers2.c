// #include <stdio.h>
// int main(){
//     int X,Y,T;
//     long int N,R;
//     printf(":");
//     scanf("%d",&T);

//     for(int i = 1 ;i<=T;i++){
//         scanf("%d %d %ld %ld",&X,&Y,&N,&R);
//         int pre_bur = 0;
//         int flag = 1;
//         while(flag<=N){
//             int sum = pre_bur*Y + (N-pre_bur)*X;
//             if(R>sum)
//                 pre_bur++;
//             if(R<sum){
//                 pre_bur--;
//                 break;
//             }
//             if(R==sum)
//                 break;
//             flag++;
//         }
//         if(pre_bur>=0)
//             printf("%d %d \n",(N-pre_bur),pre_bur);
//         else
//             printf("-1\n");

//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int X,T,Y;
    long int N,R;

    printf(":");
    scanf("%d",&T);

    for(int i = 1;i<=T;i++){
        scanf("%d %d %ld %ld",&X,&Y,&N,&R);
        long int count = 1;
        int flag = 0 ;
        long int pre_burger = 0;
        while(count<=N){
            long int cal = (pre_burger*Y) + (N-pre_burger)*X;
            if((cal>R)&&(pre_burger==0)){
                flag = 1;
                //printf("%d",flag);
                break;
            }
            else if(cal>R){
                pre_burger--;
                break;
            }
            else if(cal<R)
                pre_burger++;
            else
                break;
            count++;
        }
        if(flag==1)
            printf("-1\n");
        else    
            printf("%ld %ld\n",(N-pre_burger),pre_burger);
    }
    return 0;
}