#include <iostream>
using namespace std ;
int main(){
    int T,N;
    string B;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;

        cin >> B;
        int attend = 0;
        for(int i = 0;i<N;i++){
            if(B[i] == '1')
                attend++;
        }
        attend += (120-N);
        if(attend >=90)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}