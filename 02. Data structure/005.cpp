#include <iostream>

using namespace std;
typedef long long ll;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N ,M;

    cin >> N >> M;

    ll A = 0;
    ll D[N] = {0,};
    ll C[M] = {0,};
    ll sum = 0;
    cin >> D[0];
    
    for(int i = 1; i < N ; i++)
    {
        cin >> A;
        D[i] = D[i-1] + A;
    }

    for(int i = 0; i < N; i++)
    {   
        int remainder = D[i]%M;
        if(remainder == 0)
        {
            sum++;
        }
        C[remainder]++;
    }

    for (int i = 0 ; i < M ; i++)
    {
        if(C[i] > 1)
        {
            sum += (C[i]*(C[i]-1)/2);
        }
    }
    cout << sum;
}    