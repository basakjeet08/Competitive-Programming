#include <iostream>
using namespace std ;
int main(){
    float a,b,c,d;
    cout << ":";
    cin >> a >> b >> c >> d ;
    if((a/b == c/d) || (a/b == d/c) || (b/a == c/d) || (b/a == d/c))
        cout << "Possible\n";
    else if((a/c == b/d) || (a/c == d/b) || (c/a == b/d) || (c/a == d/b))
        cout << "Possible\n";
    else if((a/d == b/c) || (a/d == c/b) || (d/a == b/c) || (d/a == c/b))
        cout << "Possible\n";
    else
        cout << "Impossible\n";
    return 0;
}