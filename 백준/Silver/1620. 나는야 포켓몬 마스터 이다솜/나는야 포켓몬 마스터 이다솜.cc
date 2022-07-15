// Hyewon Choi
// 2022.07.15.FRI

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    string name, question;
    cin >> N >> M;
    string dic1[N];
    unordered_map<string, int> dic2;
    for (int i=0;i<N;i++){
        cin >> name;
        dic1[i] = name;
        dic2.insert(make_pair(name,i+1));
    } 
    for (int i=0;i<M;i++) {
        cin >> question;
        if (atoi(question.c_str())) cout << dic1[atoi(question.c_str())-1] << '\n';
        else cout << dic2[string(question)] << '\n';
    }
}