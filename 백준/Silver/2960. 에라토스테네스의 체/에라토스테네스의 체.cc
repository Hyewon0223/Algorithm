// Hyewon Choi
// 2022.07.08.FRI

#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int cnt = 0;
    int answer = 0;
    bool num[N+1];
    for (int i=0;i<N+1;i++) num[i] = false;
    int P = 2;
    while(cnt < K){
        while (num[P]) P++;
        for (int i=P;i<N+1;i+=P) {
            if (!num[i]) {
                cnt++;
                num[i] = true;
            }
            if (cnt == K) {
                answer = i;
                break;
            }
        }
    }
    cout << answer << '\n';
}