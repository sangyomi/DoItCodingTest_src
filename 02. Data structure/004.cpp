#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T;

    cin >> N >> T;

    int A;
    int D[N+1][N+1] = {0, };

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> A;

            D[i][j] =  D[i-1][j] + D[i][j-1] - D[i-1][j-1] + A;
        }
    }

    while(T--)
    {
        int X1,Y1,X2,Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        int result = D[X2][Y2] - D[X2][Y1-1] - D[X1-1][Y2] + D[X1-1][Y1-1] ;
        cout << result <<"\n";
    }

    return 0;
}