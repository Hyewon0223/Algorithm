// Hyewon Choi
// 2022.07.14.THU

#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int num[N];
    deque<int> balloon;
    for (int i=0;i<N;i++) {
        cin >> num[i];
        balloon.push_back(i+1);
    }

    while(balloon.size() > 1) {
        cout << balloon.front() << " ";
        int idx = num[balloon.front()-1];
        balloon.pop_front();
        if (idx > 0) {
            for (int i=0;i<idx-1;i++){
                balloon.push_back(balloon.front());
                balloon.pop_front();
            }
        }
        else {
            for (int i=idx;i<0;i++){
                balloon.push_front(balloon.back());
                balloon.pop_back();
            }
        }
    }
    cout << balloon.front() << '\n';
}
