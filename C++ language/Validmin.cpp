#include <iostream>
using namespace std;
int main(){
    int T,AB,BC,CA;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> AB >> BC >> CA ;
        if((AB == BC) && (CA>=AB))
            cout << "YES \n";
        else if((AB == CA) && (BC>=AB))
            cout << "YES \n";
        else if((BC == CA) && (AB>=BC))
            cout << "YES\n";
        else
            cout << "NO \n";
    }
    return 0 ;
}