#include <iostream>
using namespace std ;
int main(){
    string S;
    cout << ":";
    cin >> S ;
    int N;
    cin >> N ;
    while(N--){
        string W ;
        int flag = 0;
        for(int i=0;i<W.length();i++){
            int isValid = 0;
            for(int j=0;j<S.length();j++){
                if(W.at(i) == S.at(j))
                    isValid = 1;
            }
            if(!isValid){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "No\n";
        else
            cout << "Yes\n";
    }



    return 0;
}