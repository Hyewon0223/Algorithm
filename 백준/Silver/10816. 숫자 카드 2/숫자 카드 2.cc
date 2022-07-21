// Hyewon Choi
// 2022.07.21.THU

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, X;
    cin >> N;
    int A[N];
    for (int i=0;i<N;i++) cin >> A[i];
    sort(A,A+N);
    cin >> M;
    for (int i=0;i<M;i++) {
        cin >> X;
        cout << upper_bound(A,A+N,X) - lower_bound(A,A+N,X) << ' ';
    }
    cout << '\n';
}