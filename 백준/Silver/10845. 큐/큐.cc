// Hyewon Choi
// 2022.07.17.SUN

#include <iostream>
#include <queue>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int N, X;
    string command;
    queue<int> queue;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> command;
        if (command == "push") {
            cin >> X;
            queue.push(X);
        }
        else if (command == "pop") {
            if (!queue.empty()) {
                cout << queue.front() << '\n';
                queue.pop();
            }
            else cout <<  -1 << '\n';
        }
        else if (command == "size") cout << queue.size() << '\n';
        else if (command == "empty") {
             if (queue.empty()) cout << 1 << '\n';
             else cout << 0 << '\n';
        }
        else if (command == "front" || command == "back") {
            if (!queue.empty()) {
                if (command == "front") cout << queue.front() << '\n';
                else cout << queue.back() << '\n'; // command == "back"
            }
            else cout << -1 << '\n';
        }
    }
}