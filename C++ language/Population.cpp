#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int Y,Z,X;
        cin >> X >> Y >> Z;
        cout << (X+Z-Y) << endl;
    }
    return 0;
}