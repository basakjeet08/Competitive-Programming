#include <iostream>
using namespace std ;

 int main(){
    int T,X,Y,Z;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> X >> Y >> Z ;

        if((X>=Y) )
            cout << "PIZZA\n";
        else if((X<Y) && (X>=Z))
            cout << "BURGER\n";
        else
            cout << "NOTHING\n";
    }
    return 0 ;
 }