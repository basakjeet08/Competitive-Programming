#include <iostream>
#include <string>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        int N;
        cin >> N ;
        string A,B,temp;
        temp = "";
        cin >> A;
        cin >> B;
        for(int i = 0;i<N;i++)
            if(A[i] != B[i])
                temp = temp + B[i];
        int frequency[26] = {};
        for(int i = 0;i<temp.length();i++)
            frequency[temp[i] - 'a']++;
        
        int count = 0;
        for(int i = 0;i<26;i++)
            if(frequency[i]>0)
                count++;

        cout << count << "\n";
    }
    return 0 ;
}