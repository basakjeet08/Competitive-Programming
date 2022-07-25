#include <stdio.h>
int main(){
    int T;
    long int M, N;
    printf(":");
    scanf("%d", &T);
    while (T-- > 0)
    {
        scanf("%ld %ld", &N, &M);
        while ((M%N) != 0)
        {
            long int div = M / N;
            printf("%ld\n",div);
            long int remainder = M % N;
            printf("%ld\n",remainder);
            if (div < remainder)
                N = N + (remainder / div);
            else if(div>remainder)
                M = M - remainder;
            else
                N = N + 1;
        }
        printf("%ld %ld\n", N, M);
    }
    return 0;
}