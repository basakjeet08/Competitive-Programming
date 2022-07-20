#include <stdio.h>
#include <string.h>

void reverse();
void checkPalindrome();
void doCalculation();
char S[20];
char rev[20];
int uni_count = 0;
int main(){
    int T,N;
    
    printf(":");
    scanf("%d",&T);

    for(int i = 1;i<=T;i++){
        scanf("%d",&N);
        getchar();
        gets(S);
        
        for(int count = 0;count<=N/2;count++){
            reverse();
            checkPalindrome();

        }
    }

    return 0;
}

void reverse(){
    int i = 0;
    int count = 0;
    for(i = strlen(S)-1;i>=0;i--){
        rev[count] = S[i];
        count++;
    }
    printf("%s\n",rev);
}
void checkPalindrome(){
    if(strcpy(S,rev) == 0)
        printf("%s\n",S);
    else
        doCalculation();
}

void doCalculation(){
    int count;
    for(int i = 0;i<strlen(S);i++){
        if(S[i] != rev[i])
            count = i;
    }

    for(int i = count;i<strlen(S)-2;i++){
        S[i] = S[i+1];
    }
    uni_count++;
}