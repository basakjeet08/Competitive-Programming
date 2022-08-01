#include <iostream>
#include <string>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        string S;
        cin >> S ;
        int count_1 = 0;
        int count_0 = 0;
        for(int i = 0;i<S.length();i++){
            if(S[i] == '1')
                count_1++;
            else
                count_0++;
        }
        if(count_1 >= count_0)
            cout << "WIN\n";
        else
            cout << "LOSE\n";
    }
    return 0 ;
}
