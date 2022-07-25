#include <stdio.h>
int main(){
	int T, N,A;
    long int M,B;
	long int tempDiff, maxDiff;
	scanf("%d",&T);
	while (T--){
		scanf("%d %ld",&N,&M);
		if (M < 2*N)
			printf("%ld %ld\n",M,M);

		else if ((M >= 2*N) && (M%N == 0))
				printf("%d %ld\n",N,M);
		
		else{
			maxDiff = A = B = -1;
			for (int i=N; i<(2*N); i++){
				tempDiff = (i*(M/i)) - i;
				if (tempDiff > maxDiff){
					A = i;
					B = i*(M/i);
					maxDiff = tempDiff;
				}
			}
			printf("%d %ld\n",A,B);
		}
	}
	return 0;
}