// Hyewon Choi
// 2022.07.22.FRI

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x;
    priority_queue<int> pq;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> x;
        if (x == 0) {
            if (pq.empty()) cout << 0 << '\n'; 
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else pq.push(x);
    }
}