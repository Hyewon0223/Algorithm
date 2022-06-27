// Hyewon Choi
// 2022.06.27.MON

#include <iostream>
#include <algorithm>
using namespace std;

int N,M;
int like[31][31];
int answer = -1;

void mostLike(int a, int b, int c){
    int result = 0;
    for (int i=0;i<N;i++){
        int temp = max(like[i][a],like[i][b]);
        result += max(temp, like[i][c]);
    }
    if (answer < result) answer = result;
}

int main() {
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> like[i][j];
        }
    }
    for (int i=0;i<M;i++){
        for (int j=i;j<M;j++){
            for (int k=j;k<M;k++){
                mostLike(i,j,k);
            }
        }
    }
    cout << answer << '\n';
}