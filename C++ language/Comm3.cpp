#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T --){
        int x1,x2,x3,y1,y2,y3,R;
        cin >> R ;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3 ;
        int distace_A_B = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) - (R*R);
        int distace_A_C = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) - (R*R);
        int distace_B_C = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) - (R*R);
        int count = 0;
        if(distace_A_B<=0)
            count++;
        if(distace_A_C<=0)
            count++;
        if(distace_B_C<=0)
            count++;

        if(count>=2)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0 ;
}
