#include <iostream>
using namespace std;
int checkBuy(int);
int X,Y,T,N,R;
int main(){


    cout<<":";
    cin>>T;

    for(int i = 1 ;i<=T;i++){
        cin >> X >> Y >> N >> R;
        int pre_bur = 0;
        int flag = 1;
        while(flag<=N){
            if((R>=(pre_bur*Y+(N-pre_bur)*X))&&(R<(N-pre_bur-1)*Y+(N-pre_bur-1)*X))
                pre_bur++;
            else if((R>=(pre_bur*Y)+(N-pre_bur)*X)&&(R<(pre_bur-1)*Y+(N-pre_bur-1)*X))
                break;
            else{
                flag = 0;
                break;
            }
            flag++;
        }
        if(flag ==0)
            cout<<"-1\n";
        else
            cout<<(N-pre_bur)<<" "<<pre_bur<<"\n";

    }
    return 0;
}

int checkBuy(int pre_bur){
    return pre_bur*Y + (N-pre_bur)*X;
}