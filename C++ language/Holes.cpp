#include <iostream>
#include <string>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        string S ;
        cin >> S ;

        int count = 0;
        for(int i = 0;i<S.length();i++){
            char ch = S.at(i);

            switch (ch){
                case 'A':
                case 'D':
                case 'O':
                case 'P':
                case 'Q':
                case 'R':
                count++;
                break;
                case 'B':
                count +=2;
                break;
            }
        }
        cout << count << "\n";
    }
    return 0;
}