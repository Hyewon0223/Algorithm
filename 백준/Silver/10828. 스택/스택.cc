// Hyewon Choi
// 2022.07.12.TUE

#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int N, X;
    string command;
    stack<int> stack;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> command;
        if (command == "push") {
            cin >> X;
            stack.push(X);
        }
        else if (command == "pop") {
            if (!stack.empty()) {
                cout << stack.top() << '\n';
                stack.pop();
            }
            else cout <<  -1 << '\n';
        }
        else if (command == "size") cout << stack.size() << '\n';
        else if (command == "empty") {
             if (stack.empty()) cout << 1 << '\n';
             else cout << 0 << '\n';
        }
        else if (command == "top") {
            if (!stack.empty()) cout << stack.top() << '\n';
            else cout << -1 << '\n';
        }
    }
}