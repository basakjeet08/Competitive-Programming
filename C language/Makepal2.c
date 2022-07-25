#include <stdio.h>
void printPalindrome(char[] , int, char );
int main(){
    int T,N;
    printf(":");
    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        getchar();
        char S[N];
        char new_string[N];
        gets(S);
        int count_0s,count_1s;
        count_0s = count_1s = 0;
        for(int i = 0;i<=N;i++){
            if(S[i] == '0')
                count_0s++;
            else
                count_1s++;
        }
        if(count_0s<=N/2)
            printPalindrome(S,N,'0');
        else
            printPalindrome(S,N,'1');
    }
    return 0;
}
void printPalindrome(char S[],int N,char flag){
    for(int i = 0;i<N;i++){
        if(S[i]==flag)
            continue;
        printf("%c",S[i]);
    }
    printf("\n");
}