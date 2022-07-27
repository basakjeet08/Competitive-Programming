#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T,a,b,c,d;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> a >> b >> c >> d;
        int e = max(a,b) + max(c,d);
        cout << e << "\n";
    }
    return 0;
}