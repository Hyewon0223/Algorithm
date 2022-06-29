// Hyewon Choi
// 2022.06.29.WED

#include <iostream>
using namespace std;

int main(){
    string text;
    while(true){
        getline(cin, text);
        if (text == "END") break;
        string answer = "";
        for (int i=text.length()-1;i>=0;i--){
            answer += text[i];
        }
        cout << answer << '\n';
    }
}