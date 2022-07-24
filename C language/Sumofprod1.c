#include <stdio.h>
int main()
{
    int T, N;
    printf(":");
    scanf("%d",&T);
    while (T-- > 0)
    {
        scanf("%d",&N);
        int A[N];
        for (int i = 0; i < N; i++)
            scanf("%d",&A[i]);

        long int sum = 0;
        int count = 0;
        for(int i = 0;i<N;i++){
            if(A[i]==1){
                count++;
                sum = sum + count;
            }
            if(A[i]==0)
                count = 0;
        }
        printf("%ld\n",sum);
    }
}