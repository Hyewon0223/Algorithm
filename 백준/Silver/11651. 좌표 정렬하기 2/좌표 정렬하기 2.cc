// Hyewon Choi
// 2022.07.18.MON

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool customSort(pair<int,int>A, pair<int,int>B){
    if (A.second == B.second) return A.first < B.first;
    return A.second < B.second;
}

int main(){
    int N,a,b;
    cin >> N;
    vector<pair <int,int> > arr;
    for (int i=0;i<N;i++) {
        cin >> a >> b;
        arr.push_back(pair<int, int>(a,b));
    }
    sort(arr.begin(), arr.end(), customSort);
    for (int i=0;i<N;i++) cout << arr[i].first << " " << arr[i].second << '\n';
}