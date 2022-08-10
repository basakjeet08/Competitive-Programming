#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        float res = round(pow((0.143*N),N));
        cout << (int)res << endl;
    }
    return 0;
}