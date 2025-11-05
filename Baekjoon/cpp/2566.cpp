//최댓값구하기

#include <iostream>
using namespace std;

int main() {
    int arr[9][9];
    int maxVal = 0;
    int row = 0, col = 0;

    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin >> arr[i][j];
            if(arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << maxVal << '\n';
    cout << row+1 << ' ' << col+1 << endl;
    return 0;
}
