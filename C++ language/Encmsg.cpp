#include <iostream>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N ;
        string S;
        cin >> S;
        for(int i = 0;i<N-1;i+=2){
            char temp = S[i];
            S[i] = S[i+1];
            S[i+1] = temp;
        }
        for(int i = 0;i<N;i++){
            int temp = (int)S.at(i);
            cout << (char)(219-temp);
        }
        cout << "\n";
    }
    return 0 ;
}