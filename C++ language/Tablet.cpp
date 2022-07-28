#include <iostream>
using namespace std;

int main(){
    int T,N,B;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> B;
        int W[N],H[N],P[N];
        for(int i = 0;i<N;i++)
            cin >> W[i] >> H[i] >> P[i];

        int max_area = -1;
        for(int i = 0;i<N;i++){
            if((P[i] <= B) && ((H[i]*W[i]) > max_area))
                max_area = H[i]*W[i];
        }
        if(max_area == -1)
            cout << "no tablet\n";
        else
            cout << max_area << "\n";
    }
    return 0 ;
}