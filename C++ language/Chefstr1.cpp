#include <iostream>
using namespace std ;

int main(){
    int T,N;
    cout << ";";
    cin >> T ;
    while(T--){
        cin >> N ;
        int S[N];
        for(int i = 0;i<N;i++)
            cin >> S[i];

        long long int sum = 0;
        for(int i = 0;i<N-1;i++)
            sum += abs(S[i] - S[i+1]) -1 ;

        cout << sum << "\n";
    }
    return 0;
}