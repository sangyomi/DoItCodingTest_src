#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    vector<int> A(N,0);

    for(int i = 0; i < N ; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    
    int count = 0;

    for(int i = 0; i < N ; i ++)
    {
        int start = 0;
        int end = N-1;

        while(end > start)
        {
            if(i == end)
            {
                end--;
            }
            else if (i == start)
            {
                start++;
            }
            else if(A[end]+A[start] == A[i])
            {
                count++;
                break;
            }
            else if(A[end]+A[start] > A[i])
            {
                end--;
            }
            else if(A[end]+A[start] < A[i])
            {
                start++;
            }
        }
    }
    cout << count;
}