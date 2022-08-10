#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        long long int N,K;
        cin >> N >> K ;
        long long int A[N];
        for(int i=0;i<N;i++)
            cin >> A[i];
        for(int i=0;i<N;i++){
            if(A[i]%K == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}