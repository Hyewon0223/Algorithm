// Hyewon Choi
// 2022.07.15.FRI

#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    int answer = 0;
    string name, question;
    cin >> N >> M;
    set<string> dic;
    for (int i=0;i<N;i++){
        cin >> name;
        dic.insert(name);
    } 
    for (int i=0;i<M;i++) {
        cin >> question;
        if (dic.find(question) != dic.end()) answer++;
    }
    cout << answer << '\n';
}