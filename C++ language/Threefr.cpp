#include <iostream>
using namespace std;
int main(){
    int T,X,Y,Z;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> X >> Y >> Z ;
        if(((X+Y)==Z) || ((X+Z) == Y) || ((Y+Z) == X))
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}