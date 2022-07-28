#include <iostream>
#include <string>
using namespace std;
int main(){
    int R,L;
    cin >>R;
    while(R--){
        cin >> L;
        string S;
        cin.ignore();
        cin >> S;
        string temp = "";
        for(int i = 0;i<L;i++)
            if(S.at(i) != '.')
                temp = temp + S.at(i);
        L = temp.length();
        if(temp.length() == 0){
            cout << "Valid\n";
            continue;
        }
        bool isValid = 1;
        int isCorrect = 1;
        for(int i = 0;i<L;i++){
            if((isValid == 1) && (temp.at(i) != 'H')){
                isCorrect = 0;
                break;
            }
            if((isValid == 0) && (temp.at(i) != 'T')){
                isCorrect = 0;
                break;
            }
            isValid = !isValid;
        }
        if(isValid == 0)
            isCorrect = 0;
            
        if(isCorrect == 1)
            cout << "Valid\n";
        else
            cout << "Invalid \n";
    }
    return 0 ;
}