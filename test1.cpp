#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector<vector<int>> array_2d;
    int max = -32768,ans=0;
    array_2d.resize(6);
    for (int i = 0; i < 6;i++){
        array_2d[i].resize(6);
    }
    for (int i = 0; i < 6;i++){
        for (int j = 0; j < 6;j++){
            cin >> array_2d[j][i];
        }
    }
    for (int i = 1; i < 5;i++){
        for (int j = 1; j < 5;j++){
            ans = array_2d[i][j] + array_2d[i][j - 1] + array_2d[i + 1][j - 1] + array_2d[i - 1][j - 1] + array_2d[i][j + 1] + array_2d[i - 1][j + 1] + array_2d[i + 1][j + 1];
            if(ans>max){
            max = ans;
        }
        }
        
    }
    cout << max;

    return 0;
}