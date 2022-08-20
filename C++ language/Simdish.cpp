#include <iostream>
#include <string>
using namespace std ;
int main(){
    int T ;
    cout << ";";
    cin >> T ;
    while(T--){
        string st1[4];
        string st2[4];
        for(int i=0;i<4;i++)
            cin >> st1[i];
        for(int i=0;i<4;i++)
            cin >> st2[i];
        int count = 0;
        for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++)
                if(st1[i].compare(st2[j]) == 0)
                    count++;
            if(count == 2)
                break;
        }
        if(count == 2)
            cout << "similar\n";
        else
            cout << "dissimilar\n";
    }
    return 0; 
}