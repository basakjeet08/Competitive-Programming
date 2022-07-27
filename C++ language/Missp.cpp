#include <iostream>
using namespace std;
int main(){
    int T;
    long long N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N;
        int count = 0;
        int dolls_left[N];
        for(int i = 0;i<N;i++){
            cin >> dolls_left[i];
            count = count ^ dolls_left[i];
        }
        cout << count << "\n";
    }
    return 0 ;
}