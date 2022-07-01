// Hyewon Choi
// 2022.07.01.FRI

#include <iostream>
using namespace std;

string arr[11];

int main(){
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    string now[N];
    for (int i=0;i<N;i++){
        cin >> now[i];
    }
    char answer[N][N];
    bool isOpenBomb = false;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            int bomb = 0;
            if (now[i][j] == 'x' && arr[i][j] == '*') isOpenBomb = true;
            if (now[i][j] == 'x'){
                if (i-1>=0 && arr[i-1][j]=='*') bomb++;
                if (i+1<N && arr[i+1][j]=='*') bomb++;
                if (j-1>=0 && arr[i][j-1]=='*') bomb++;
                if (j+1<N && arr[i][j+1]=='*') bomb++;

                if (i-1>=0 && j-1>=0 && arr[i-1][j-1]=='*') bomb++;
                if (i-1>=0 && j+1<N && arr[i-1][j+1]=='*') bomb++;
                if (i+1<N && j-1>=0 && arr[i+1][j-1]=='*') bomb++;
                if (i+1<N && j+1<N && arr[i+1][j+1]=='*') bomb++;

                answer[i][j] = (char)(bomb+48);
            }
            else answer[i][j] = '.';
        }
    }
    
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) {
            if (isOpenBomb && arr[i][j] == '*') cout << arr[i][j];
            else cout << answer[i][j];
        }
        cout << '\n';
    }
}
