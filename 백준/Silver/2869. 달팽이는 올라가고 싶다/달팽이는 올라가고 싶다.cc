// Hyewon Choi
// 2022.07.19.TUE

#include <iostream>
using namespace std;

int main(){
    int A, B, V;
    cin >> A >> B >> V;
    int answer = 0;
    if ((V-A)%(A-B) == 0) answer = (V-A)/(A-B);
    else answer = (V-A)/(A-B) + 1;
    cout << answer+1 << '\n';
}
