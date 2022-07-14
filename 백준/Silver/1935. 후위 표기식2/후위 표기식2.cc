// Hyewon Choi
// 2022.07.14.THU

#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int num[N];
    string str;
    stack<double> s;
    cin >> str;
    for (int i=0;i<N;i++) cin >> num[i];
    
    for (int i=0;i<str.length();i++){
        if ('A' <= str[i] && str[i] <= 'Z') s.push(num[str[i]-'A']);
        else {
            double value = s.top();
            s.pop();
            if (str[i] == '+') value = s.top() + value;
            else if (str[i] == '-') value = s.top() - value;
            else if (str[i] == '*') value = s.top() * value;
            else if (str[i] == '/') value = s.top() / value;
            s.pop();
            s.push(value);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top() << '\n';
}
