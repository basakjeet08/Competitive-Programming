#include <iostream>
using namespace std;
int main(){
    int T,N;
    cin >> T ;
    while(T--){
        cin >> N;
        int A[N];
        for(int i = 0;i<N;i++)
            cin >> A[i];

        for(int i = 0;i<N-1;i++){
            if(A[i] > A[i+1]){
                swap(A[i],A[i+1]);
                break;
            }
        }
        int count = 0;
        for(int i = 0;i<N-1;i++){
            if(A[i] > A[i+1]){
                count++;
                break;
            }
        }
        if(count > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0 ;
}