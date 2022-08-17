#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
        int A,B;
        cin >> A >> B ;
        int value = abs(A-B);
        if(value%10 == 9)
            value--;
        else if(value%10 == 0)
            value++;
        else
            value++;
        cout << value << endl;
    return 0 ;
}