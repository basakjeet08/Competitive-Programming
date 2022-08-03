#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ";";
    cin >> T ;
    while(T--){
        float x;
        cin >> x;
        float amt = 100 - x;
        cout << amt << endl;
    }
    return 0;
}