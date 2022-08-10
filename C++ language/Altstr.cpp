#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        string S;
        cin >> S ;
        int no_1,no_0 ;
        no_0 = no_1 = 0;
        for(int i = 0;i<N;i++){
            if(S.at(i) == '1')
                no_1++;
            else
                no_0++;
        }
        if((no_0 < no_1) && (no_1 >= (no_0*2)+1))
            cout << (no_0*2)+1 << endl;
        else if((no_0 <= no_1) && (no_1 < (no_0*2)+1))
            cout << (no_0+no_1) << endl;
        else if((no_0 > no_1) && (no_0 >= (no_1*2)+1))
            cout << (no_1*2)+1 << endl;
        else if((no_0 >= no_1) && (no_0 < (no_1*2)+1))
            cout << no_0+no_1 << endl;
    }
    return 0;
}