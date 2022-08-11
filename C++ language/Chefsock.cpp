#include <iostream>
using namespace std ;
int main(){
    long long jacketCost,sockCost,money;
    cout << ":";
    cin >> jacketCost >> sockCost >> money ;
    int remaining = money - jacketCost ;
    int socks = remaining / sockCost;
    if(socks%2 == 0)
        cout << "Lucky Chef\n";
    else
        cout << "Unlucky Chef\n";
    return 0;
}