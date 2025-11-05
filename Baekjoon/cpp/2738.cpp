//행렬 덧셈
#include <iostream>
using namespace std;

int main () {
    int N,M;
    cin >> N >> M ;
    int A[100][100], B[100][100];

    //첫번째 행렬
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
        cin >> A[i][j];

    //두번째행렬
    for(int i=0; i<N; i++)
        for(int j=0;j<M;j++)
        cin >> B[i][j];
    

    //더힌 깂 출력
    for(int i=0; i<N; i++){
        for(int j=0;j<M;j++){
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}