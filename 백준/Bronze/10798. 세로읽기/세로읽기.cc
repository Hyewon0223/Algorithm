// Hyewon Choi
// 2022.06.27.MON

#include <iostream>
#include <string>
using namespace std;

string word[5];
string answer = "";

int main(){
    for (int i=0;i<5;i++) cin >> word[i];
    for (int i=0;i<15;i++){
        for (int j=0;j<5;j++){
            if(word[j][i]) answer += word[j][i];
        }
    }
    cout << answer << '\n';
}