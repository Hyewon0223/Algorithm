// Hyewon Choi
// 2022.07.20.WED

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N, M;
    cin >> T;
    for (int i=0;i<T;i++){
        long long answer = 1;
        cin >> N >> M;
        for (int i=M,j=1;i>M-N;i--,j++){
            answer *= i;
            answer /= j;
        }
        cout << answer << '\n';
    }
}