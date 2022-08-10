#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        int N;
        cin >> N ;
        string S;
        cin >> S;
        int count = 0 ;
        bool was_1 = 0;
        for(int i=0;i<N;i++){
            if((S.at(i) == '1') && (!was_1)){
                count++;
                was_1 = !was_1;
            }
            else if(S.at(i) == '0')
                was_1 = 0;
        }
        if(S.at(N-1) == '1')
        count--;
        cout << count << endl;
    }    
    return 0;
}