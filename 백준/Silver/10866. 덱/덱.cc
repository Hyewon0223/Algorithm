// Hyewon Choi
// 2022.07.13.WED

#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,X;
    cin >> N;
    deque<int> dq;
    string command; 
    for (int i=0;i<N;i++){
        cin >> command;
        if (command == "push_front" || command == "push_back") {
            cin >> X;
            if (command == "push_front") dq.push_front(X);
            else if (command == "push_back") dq.push_back(X);
        }
        else if (command == "pop_front" || command == "pop_back") {
            if (!dq.empty()) {
                if (command == "pop_front") {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                else if (command == "pop_back") {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
            }
            else cout << -1 << '\n';
        }
        else if (command == "size") cout << dq.size() << '\n';
        else if (command == "empty") {
            if (dq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (command == "front" || command == "back"){
            if (!dq.empty()) {
                if (command == "front") cout << dq.front() << '\n';
                else if (command == "back") cout << dq.back() << '\n';
            }
            else cout << -1 << '\n';
        }
    }
}