#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        string S;
        cin >> S ;
        int sum = 0;
        for(int i=0;i<S.length();i++)
            if((S.at(i) >= '0') && (S.at(i) <= '9'))
                sum = sum + (S.at(i)-'0');
        cout << sum << endl;
    }
    return 0;
}