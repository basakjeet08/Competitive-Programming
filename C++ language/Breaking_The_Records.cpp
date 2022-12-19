#include <bits/stdc++.h>
using namespace std;

int returnScores(int scores[] , int n){
    int max, min , max_Count = 0 , min_count = 0;
    max = min = scores[0];
    for(int i = 1 ;i < n ; i++){
        if(max < scores[i]){
            max = scores[i];
            max_Count++ ;
        }
        if(min > scores[i]){
            min = scores[i];
            min_count++ ;
        }
    }
    return (max_Count+min_count);
}

int main(){
    int n;
    cin >> n ;
    int scores[n];
    for(int i= 0;i<n;i++)
        cin >> scores[i];

    int result = returnScores(scores , n);
    cout << result << endl ;

    return 0 ;
}