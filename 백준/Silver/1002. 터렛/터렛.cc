// Hyewon Choi
// 2022.07.20.WED

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,d, x1,y1,r1,d1, x2,y2,r2,d2;
    cin >> T;
    for (int i=0;i<T;i++){
        int answer = 0;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        d1 = (r1-r2) * (r1-r2);
        d2 = (r1+r2) * (r1+r2);
        if (d == 0) {
            if (d1 == 0) answer = -1;
            else answer = 0;
        }
        else if (d == d1 || d == d2) answer = 1;
        else if (d1 < d && d < d2) answer = 2;
        else answer = 0;

        cout << answer << '\n';
    }

}
