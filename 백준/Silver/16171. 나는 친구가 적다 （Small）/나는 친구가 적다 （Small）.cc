// Hyewon Choi
// 2022.06.30.THU

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    string keyword;
    string answer = "";
    cin >> text >> keyword;
    for (int i=0;i<text.length();i++){
        if (!isdigit(text[i])) answer += text[i];
    }
    if (answer.find(keyword) != string::npos) cout << 1 << '\n';
    else cout << 0 << '\n';
}