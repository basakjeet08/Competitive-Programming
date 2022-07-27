#include <iostream>
#include <string>
using namespace std;
int main(){
    int T,N;
    string S ,R;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N;
        cin >> S;
        cin >> R;
        int count = 0;
        char ch = R.at(0);
        for(int i = 0;i<N;i++){
            if(S.at(i) != R.at(i))
                count++;
        }
        if(count%2 == 0)
            cout << "1 \n";
        else
            cout << "0 \n";
    }

    return 0 ;
}