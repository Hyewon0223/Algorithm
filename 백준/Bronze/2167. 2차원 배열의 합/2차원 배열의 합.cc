// Hyewon Choi
// 2022.06.30.THU

#include <iostream>
using namespace std;

int arr[301][301];

int main(){
    int N,M,K,I,J,X,Y;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++) cin >> arr[i][j];
    }
    cin >> K;
    for (int i=0;i<K;i++){
        int answer = 0;
        cin >> I >> J >> X >> Y;
        for (int j=I-1;j<X;j++){
            for (int k=J-1;k<Y;k++){
                answer += arr[j][k];
            }
        }
        cout << answer << '\n';
    }
}