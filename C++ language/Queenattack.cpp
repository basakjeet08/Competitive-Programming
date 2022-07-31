#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T,N,X,Y;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> X >> Y ;
        int min_1 = min(X,Y);
        int min_2 = min((N-X),(N-Y));
        int attacks = 0;
        if(min_1 <= min_2)
            attacks = (min_1-1)*2 + 3*(N-1);
        else 
            attacks = min_2*2 + 3*(N-1);

        cout << attacks << "\n";
    }
    return 0 ;
}