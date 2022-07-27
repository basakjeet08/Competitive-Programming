#include <iostream>
using namespace std;

int main(){

    int R = 105;
    cout<<":";
    cin >> R;
    if((R>=1)&&(R<=50))
        cout << "100\n";
    else if(R<=100)
        cout << "50\n";
    else
        cout << "0 \n";
    return 0;
}