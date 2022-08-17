#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int A,B,C;
        cin >> A >> B >> C ;
        if((A<=B) && (C <= B))
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    return 0;
}