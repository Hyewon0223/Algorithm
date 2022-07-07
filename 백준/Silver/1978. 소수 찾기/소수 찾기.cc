// Hyewon Choi
// 2022.07.07.THU

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int num[N];
    for (int i=0;i<N;i++) cin >> num[i];
    int answer = 0;
    for (int i=0;i<N;i++){
        int cnt = 0;
        if (num[i] == 1) cnt = -1;
        for (int j=2;j<num[i];j++){
            if (num[i]%j == 0) {
                cnt++;
                break;
            }
        }
        if (cnt == 0) answer++; 
    }
    cout << answer << '\n';
}
