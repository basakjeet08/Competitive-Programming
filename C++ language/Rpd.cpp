#include <iostream>
using namespace std;
int sumDigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int ans=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int product=arr[i]*arr[j];
                int sum=sumDigit(product);
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
