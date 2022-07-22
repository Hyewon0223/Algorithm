// Hyewon Choi
// 2022.07.22.FRI

#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> s;
    string str;
    getline(cin, str);
    for (int i=0;i<str.length()+1;i++){
        if (str[i] == ' ' || i==str.length()) {
            while (!s.empty()) {
                cout << s.top();
                s.pop();
            }
            if (str[i] == ' ') cout << ' ';
        }
        else if (str[i] == '<') {
            if (!s.empty()) {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
            }
            while (str[i] != '>') {
                cout << str[i++];
            }
            cout << '>';
        }
        else {
            s.push(str[i]);
        }
    }
    cout << '\n';
}