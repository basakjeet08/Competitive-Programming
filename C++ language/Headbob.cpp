#include <iostream>
using namespace std ;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        string ges;
        cin >> ges;
        int flag = 0;
        for(int i = 0;i<N;i++){
            if(ges[i] == 'I'){
                cout << "INDIAN\n";
                flag = 1;
                break;
            }
            else if(ges[i] == 'Y'){
                cout << "NOT INDIAN\n";
                flag = 1;
                break;
            }
        }
        if(!flag)
            cout << "NOT SURE\n";
    }
    return 0 ;
}