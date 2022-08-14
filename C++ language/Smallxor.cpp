#include <iostream>
#include <algorithm>
using namespace std ;
int findMinimumIndex(long long A[],int N){
    long long min = A[0];
    int flag = 0;
    for(int i=0 ; i<N;i++)
        if(min>A[i]){
            min = A[i];
            flag = i;
        }
    return flag ;
}
int noOfMinElements(long long A[],int N,int index_min){
    int min = A[index_min];
    int count = 0;
    for(int i=0;i<N;i++)
        if(min == A[i])
            count++;
    return count-1;
}
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long N,X,Y;
        cin >> N >> X >> Y;
        long long A[N];
        for(int i =0;i<N;i++)
            cin >> A[i];
        int min_index = findMinimumIndex(A,N);
        int no_of_min_elements = noOfMinElements(A,N,min_index);
        int count = 0;
        while(Y--){
            int temp = findMinimumIndex(A,N);
            A[temp] = A[temp]^X;
            if((temp == min_index) && (count != 0))
                break;
            count++;
        }
        if(Y%2 != 0){
            
        }
    }
    return 0;
}











// #include <iostream>
// #include <algorithm>
// using namespace std ;
// int isSmall(long long int arr[],int N){
//     long long int min = arr[0];
//     int flag = 0;
//     for(int i = 0;i<N;i++)
//         if(arr[i] < min){
//             min = arr[i];
//             flag = i;
//         }
//     return flag;
// }
// int main(){
//     int T;
//     cin >> T ;
//     while(T--){
//         long long int N,X,Y;
//         cin >> N >> X >> Y;
//         long long int A[N];
//         for(int i =0;i<N;i++)
//             cin >> A[i];
//         long long int temp_old,temp_new;
//         temp_old = -1;
//         temp_new = -2;
//         while(Y--){
//             temp_old = temp_new;
//             temp_new = isSmall(A,N);
//             A[temp_new] = A[temp_new]^X;
//             if(temp_old == temp_new)
//                 break;
//         }
//         if(Y%2 != 0)
//             A[temp_new] = A[temp_new]^X;
//         sort(A,A+N);
//         for(int i=0;i<N;i++)
//             cout << A[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }