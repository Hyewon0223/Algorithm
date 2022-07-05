// Hyewon Choi
// 2022.07.06.WED

#include <iostream>
using namespace std;

// 최대공약수
long long GCD(long long a, long long b){
    if (a % b == 0) return b;
    return GCD(b, a%b);
}

int main(){
    int t,n;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> n;
        long long arr[n];
        long long answer = 0;
        for (int j=0;j<n;j++){
            cin >> arr[j];
        }
        for (int j=0;j<n-1;j++){
            for (int k=j+1;k<n;k++){
                answer += GCD(arr[j],arr[k]);
            }
        }
        cout << answer << '\n';
    }
}