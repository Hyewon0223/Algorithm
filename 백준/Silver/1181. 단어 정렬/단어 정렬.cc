// Hyewon Choi
// 2022.06.27.MON

#include <iostream>
#include <algorithm>
using namespace std;

string word[20001];

bool customSort(string a, string b){
    if (a.length() == b.length()) return a < b; 
    return a.length() < b.length();
}

int main(){
    int N;
    cin >> N;
    for (int i=0;i<N;i++) cin >> word[i];
    sort(word, word+N, customSort);
    for (int i=0;i<N;i++) {
        if (word[i] != word[i-1]) cout << word[i] << '\n';
    }
}