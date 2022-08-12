#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int X;
        cin >> X;
        int amt = 0;
        if(X <=100)
            amt = X ;
        else if(X <= 1000)
            amt = X-25;
        else if(X <=5000)
            amt = X-100;
        else
            amt = X - 500;
        cout << amt << endl;
    }
    return 0;
}