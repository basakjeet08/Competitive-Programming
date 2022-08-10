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
        int count = 0;
        while(N>0){
            int ans = pow((int)sqrt(N),2);
            N-=ans;
            count++;
        }
        cout << count << endl;
    }
    return 0 ;
}