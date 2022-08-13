#include <iostream>
using namespace std;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N ;
        cin >> N ;
        string S ;
        cin >> S ;
        int count_1s = 0 ;
        for(int i=0;i<N;i++)
            if(S.at(i) == '1')
                count_1s++;
        int operations = 0;
        while(count_1s > 0){
            int count = 0;
            for(int i=0;i<S.length();i++){
                if(S.at(i) == '1'){
                    S.at(i) = '0';
                    i++;
                    count++;
                }
            }
            count_1s -= count;
            operations++;
        }
        cout << operations << endl;
    }
    return 0 ;
}