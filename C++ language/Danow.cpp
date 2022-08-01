#include <iostream>
using namespace std ;
int main(){
    int N,Q;
    cout << ":";
    cin >> N >> Q;
    long long int A[N],B[N];
    for(int i = 0;i<N;i++)
        cin >> A[i];
    for(int i = 0;i<N;i++)
        cin >> B[i];
    while(Q--){
        long long int L,R;
        cin >> L >> R ;
        long long int sum = 0;
        for(int i = (L-1) ;i<R;i++){
            sum += A[i]*B[i];
        }
        cout << sum << "\n" ;
    }
    return 0 ;
}