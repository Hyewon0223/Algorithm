// Hyewon Choi
// 2022.07.18.MON

#include <iostream>
#include <stack>
using namespace std;

int GCD(int a, int b){
    if (a % b == 0) return b;
    return GCD(b, a%b);
}
int LCM(int a, int b){
    return a * b / GCD(a,b);
}

int main(){
    int A, B;
    cin >> A >> B;
    cout << GCD(A,B) << '\n' << LCM(A,B) << '\n';
}
