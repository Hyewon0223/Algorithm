// Hyewon Choi
// 2022.07.17.SUN

#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    while(true){
        bool answer = true;
        stack<char> s;
        getline(cin, str);
        if (str == ".") break;
        for (int i=0;i<str.length();i++){
            if (str[i] == '(' || str[i] == '[') s.push(str[i]);
            else if (str[i] == ')') {
                if (s.empty() || s.top() != '(') {
                    answer = false;
                    break;
                }
                else s.pop();
            }
            else if (str[i] == ']') {
                if (s.empty() || s.top() != '[') {
                    answer = false;
                    break;
                }
                else s.pop();
            }
        }
        if (answer && s.empty()) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }   
}