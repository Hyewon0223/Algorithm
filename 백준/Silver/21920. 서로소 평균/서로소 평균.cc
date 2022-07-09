// Hyewon Choi
// 2022.07.09.SAT

#include <iostream>
using namespace std;

long long GCD(long long a, long long b){
    if (a % b == 0) return b;
    return GCD(b, a%b);
}

int main(){
    long long N, X;
    cin >> N;
    long long arr[N];
    for (int i=0;i<N;i++) cin >> arr[i];
    cin >> X;

    double answer = 0;
    long long cnt = 0;
    for (int i=0;i<N;i++){
        if (X < arr[i]) {
            if (GCD(arr[i],X) == 1) {       
                answer += arr[i];
                cnt++;
            }
        }
        else{
            if (GCD(X,arr[i]) == 1) {
                answer += arr[i];
                cnt++;
            }
        }
    }
    cout.precision(7);
    cout << answer/cnt << '\n';
}