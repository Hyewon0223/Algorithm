// Hyewon Choi
// 2022.07.19.TUE

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int K, N;
    cin >> K;
    stack<int> s;
    for (int i=0;i<K;i++) {
        cin >> N;
        if (N == 0) s.pop();
        else s.push(N);
    }
    int answer = 0;
    int size = s.size();
    for (int i=0;i<size;i++){
        answer += s.top();
        s.pop();
    }
    cout << answer << '\n';
}