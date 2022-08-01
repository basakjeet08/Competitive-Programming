#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ";";
    cin >> T ;
    while(T--){
        int N;
        long long int X ;
        cin >> N >> X ;
        int S[N],R[N];
        for(int i = 0;i<N;i++)
            cin >> S[i] >> R[i];

        int max = -1;
        for(int i = 0;i<N;i++)
            if((max < R[i]) && (S[i] <= X))
                max = R[i];

        cout << max << "\n";
    }
    return 0 ;
}