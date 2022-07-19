// Hyewon Choi
// 2022.07.19.TUE

#include <iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;
    bool prime[N+1];
    for (int i=0;i<N+1;i++) prime[i] = true;
    prime[1] = false;
    for (int i=2;i<N+1;i++){
        for (int j=2*i;j<N+1;j+=i){
            prime[j] = false;
        }
    }

    for (int i=M;i<=N;i++) {
        if (prime[i]) cout << i << '\n';
    }
}