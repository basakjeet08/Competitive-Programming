#include <stdio.h>
int main(){
    int T,N;
    printf(":");
    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        long int A[N];
        for(int i = 0; i<N ; i++)
            scanf("%d",&A[i]);

        int count_of_mistakes = 0;
        int info_count = 1;
        long int flag = A[0];
        for(int j = 1;j<N;j++){
            if((A[j]!=flag) && (info_count>0)){
                count_of_mistakes+=2;
                info_count = 0;
                flag = A[j];
            }
            else if((A[j]!=flag) && (info_count==0)){
                count_of_mistakes++;
                flag = A[j];
            }
            else
                info_count++;
        }
        printf("%d\n",count_of_mistakes);
    }
}