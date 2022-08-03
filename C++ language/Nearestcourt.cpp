#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int X,Y;
        cin >> X >> Y ;
        int a = X-Y;
        a = abs(a);
        if(a%2 == 0)
            a = (a/2);
        else
            a = (a/2)+1;
        cout << a << endl;
    }


    return 0;
}