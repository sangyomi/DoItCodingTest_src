#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T;

    cin >> N >> T;

    vector<int>A(N,0);

    for(int i=0 ; i < N ; i++)
    {
        cin >> A[i];
    }

    for(int i = N-1 ; i > 0 ; i--)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(A[j] > A[j+1])
            {
                int tos = A[j];
                A[j] = A[j+1];
                A[j+1] = tos;
            }
        }
    }

    int count = 0;
    int start = 0;
    int end = N-1;
    while(end > start)
    {
        if(A[start]+A[end] == T)
        {
            start++;
            end--;
            count++;
        }
        else if(A[start]+A[end] < T)
        {
            start++;
        }
        else if(A[start]+A[end] > T)
        {
            end--;
        }
    }
    cout << count;
}
