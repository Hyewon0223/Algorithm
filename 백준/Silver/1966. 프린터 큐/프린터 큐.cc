// Hyewon Choi
// 2022.07.14.THU

#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testcase, N, M, idx, important;
    cin >> testcase;
    for (int i=0;i<testcase;i++){
        cin >> N >> M;
        queue<pair <int, int> > print;
        priority_queue<int> priority_print;
        int answer = 0;
        for (int j=0;j<N;j++) {
            cin >> important;
            print.push(make_pair(j, important));
            priority_print.push(important);
        }

        while(print.size() > 0) {
            idx = print.front().first;
            important = print.front().second;
            print.pop();

            if (priority_print.top() == important) {
                priority_print.pop();
                answer++;
                if (M == idx) break;
            }
            else print.push(make_pair(idx, important));
        }
        cout << answer << '\n';
    }
}