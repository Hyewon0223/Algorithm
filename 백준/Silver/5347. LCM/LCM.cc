// Hyewon Choi
// 2022.07.06.WED

#include <iostream>
using namespace std;

// 최대공약수
long long GCD(long long a, long long b){
    if (a % b == 0) return b;
    return GCD(b, a%b);
}

// 최소공배수 = 두 자연수의 곱 / 최대공약수
long long LCM(long long a, long long b){
    return a * b / GCD(a,b);
}

int main(){
    int n,a,b;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        cout << LCM(a,b) << '\n';
    }
}
