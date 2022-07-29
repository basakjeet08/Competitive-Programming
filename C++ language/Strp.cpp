#include <iostream>
#include <string>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        string S;
        cin >> S;
        int count = 0;
        int i = 0;
        while(i<N){
            if(S[i] != S[i+1])
                i++;
            else
                i+=2;
            count++;
        }
        cout << count <<"\n";
    }
    return 0 ;
}