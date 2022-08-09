#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        string S;
        cin >> S;
        int up,down;
        up = down = 0;
        bool wasUp = 0;
        if(S.at(0) == 'U'){
            wasUp = 1;
            up++;
        }
        else
            down++;
        for(int i=1;i<S.length()-1;i++){
            if((S.at(i) == 'U') && (wasUp == 0)){
                up++;
                wasUp = 1;
                }
            else if((S.at(i) == 'D') && (wasUp == 1)){
                    down++;
                    wasUp = 0;
                }
        }
        cout << min(up,down)<< "\n";
    }


    return 0;
}