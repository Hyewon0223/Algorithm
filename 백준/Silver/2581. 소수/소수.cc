// Hyewon Choi
// 2022.07.07.THU

#include <iostream>
using namespace std;

int main(){
    int M,N;
    cin >> M >> N;
    int answer = 0;
    int min = -1;
    for (int i=M;i<=N;i++){
        int cnt = 0;
        if (i == 1) cnt = -1;
        for (int j=2;j<i;j++){
            if (i%j == 0) {
                cnt++;
                break;
            }
        }
        if (cnt == 0) {
            if (answer == 0) min = i;
            answer += i; 
        }
    }
    if (min == -1) cout << -1 << '\n';
    else cout << answer << '\n' << min << '\n';
}