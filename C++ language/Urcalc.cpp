#include <iostream>
using namespace std;
int main(){
    int A,B;
    char C;
    cin >> A ;
    cin >> B ;
    cin >> C ;
    if(C == '+'){
        cout << A+B << "\n";
    }
    else if(C == '-'){
        cout << A-B << "\n";
    }
    else if(C == '*'){
        cout << A*B << "\n";
    }
    else if(C == '/'){
        cout << fixed <<(double)A/(double)B << "\n";
    }
    return 0 ;
}