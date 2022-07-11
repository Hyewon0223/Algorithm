// Hyewon Choi
// 2022.07.11.MON

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    string VPS;
    for (int i=0; i<N; i++){
        cin >> VPS;
        vector<char> check_VPS;
        string answer = "YES";
        for (int j=0;j<VPS.length();j++){
            // cout << VPS[j] << " ";
            if (VPS[j] == '(') check_VPS.push_back(VPS[j]);
            else{
                if (!check_VPS.empty()) check_VPS.pop_back();
                else {
                    answer = "NO";
                    break;
                }
            }
        }
        if (!check_VPS.empty()) answer = "NO";
        cout << answer << '\n';
    }
}