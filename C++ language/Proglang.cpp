#include <iostream>
#include <string>
using namespace std;

int main(){
    int T , A,B,A1,B1,A2,B2;
    cin >> T;
    while(T--){
        cin >> A >> B >> A1 >> B1 >> A2 >> B2;

        if(((A==A1) || (A==B1)) && ((B==A1) || (B == B1)))
            cout << "1 \n";
        else if(((A==A2) || (A==B2)) && ((B==A2) || (B == B2)))
            cout << "2 \n";
        else
            cout << "0 \n";
    }
    return 0;
}