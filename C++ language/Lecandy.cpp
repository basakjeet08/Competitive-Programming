#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N ;
        long long C ;
        cin >> N >> C ;
        int A[N];
        long long sum = 0;
        for(int i=0;i<N;i++){
            cin >> A[i];
            sum += A[i];
        }
        if(sum <= C)
            cout << "Yes\n";
        else 
            cout << "NO\n";
    }
    return 0;
}