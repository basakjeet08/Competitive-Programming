#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        string s;
        cin >> s;

        for(int i = 0;i < s.length();i++){
            if(s[i] == '>')
                s[i] = '<';
            else if(s[i] == '<')
                s[i] = '>';
        }
        int count = 0;
        for(int i = 0;i<s.length()-1;i++){
            if((s[i] == '>') && (s[i+1] == '<'))
                count++;
        }
        cout << count << "\n";
    }
    return 0 ;
}