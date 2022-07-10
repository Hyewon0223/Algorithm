// Hyewon Choi
// 2022.07.10.SUN

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool cmp(pair<int, string> u, pair<int, string> v) {
    return u.first < v.first;
}

int main(){
    int N, age;
    string name;
    cin >> N;
    vector <pair <int,string> > user(N);
    for (int i=0;i<N;i++) {
        cin >> user[i].first >> user[i].second;
    } 
    stable_sort(user.begin(), user.end(), cmp);
    for (int i=0;i<N;i++) cout << user[i].first << " " << user[i].second << '\n';
}
