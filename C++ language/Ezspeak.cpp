#include <iostream>
#include <string>
using namespace std ;
int main(){
    int T,N;
    string S;
    cout << ":" ;
    cin >> T;
    while(T--){
        cin >> N;
        cin >> S;
        int flag = 0;
        for(int i = 0;i<N;i++){
            char ch = S.at(i);
            cout << flag << " " << ch << "\n";
            if(((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) && (flag !=4))
                flag = 0;
            else
                flag++;
        }
        if(flag == 4)
            cout << "NO \n";
        else
            cout << "YES\n";
    }
    return 0 ;
}