#include <stdio.h>

int main(){
    int T,N;
    printf(":");
    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        char S[N-1];
        scanf("%s",S);
        int count = 0;
        char flag = '1';
        for(int i = 0;i<(N-1);i++){
            if((S[i] == '1') && (flag == '1')){
                count++;
                flag = '0';
            }
            if((S[i] == '0') && (flag == '0'))
                flag ='1';
        }
        if(S[N-2]=='0')
            count++;
        printf("%d\n",count);
    }
}