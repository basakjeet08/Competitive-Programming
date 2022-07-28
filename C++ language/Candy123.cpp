#include <iostream>
using namespace std;

int main(){
    int T,A,B;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> A >> B ;
        int count = 1;
        int flag = 0;
        bool isA = 1;
        while(true){
            if((isA) && ((A-count)<0))
                break;
            else if((isA) && ((A-count)>=0))
                A-=count;
            else if((!isA) && ((B-count)<0))
                break;
            else if((!isA) && ((B-count)>=0))
                B-=count;
            
            isA = !isA;
            count++;
        }
        if(isA)
            cout << "Bob\n";
        else
            cout << "Limak\n";
    }
    return 0 ;
}