#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        int A,B,C,D;
        cin >> A >> B >> C >> D ;
        int r_A = A - C;
        int r_B = B - D;
        if(r_A > r_B)
            cout << "Second\n";
        else if(r_A < r_B)
            cout << "First\n";
        else
            cout << "Any\n";
        
    }
    return 0;
}