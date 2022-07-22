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
        if((N*Y)<=R)
            printf("0 %ld\n",N);
        else if((N*X)>R)
            printf("-1\n");
        else{
            long int pre_burger = (R-(N*X))/(Y-X);
            printf("%ld %ld\n",(N-pre_burger),pre_burger);

        }
        
    }
    return 0;
}