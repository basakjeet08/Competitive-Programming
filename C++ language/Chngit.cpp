#include <iostream>
using namespace std;

int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        int A[N];
        int frequency[101] = {0};
        for(int i = 0;i<N;i++){
            cin >> A[i];
            frequency[A[i]]++;
        }
        int max = 0;
        for(int i = 1;i<101;i++)
            if(max < frequency[i])
                max = frequency[i];

        cout << (N-max) << "\n";        
    }
    return 0 ;
}