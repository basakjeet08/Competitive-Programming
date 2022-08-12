#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        string S;
        cin >> S ;
        int count = 0;
        for(int i=0;i<S.length()-1;i++){
            if((S.at(i) == 'x') && (S.at(i+1) == 'y')){
                count++;
                i++;
            }
            else if((S.at(i) == 'y') && (S.at(i+1) == 'x')){
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0 ;
}