#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

typedef long long ll; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L;

    cin >> N >> L;

    deque<pair<ll,ll>> A;

    for (int i=0 ; i < N ; i++)
    {
        ll number;

        cin >> number;
        
        pair<ll,int> p;

        p = make_pair(number, i); 

        while(A.size() && A.back().first > p.first)
        {
            A.pop_back();
        }
        A.push_back(p);

        while(A.front().second < i-L+1)
        {
            A.pop_front();
        }

        cout << A.front().first << " ";
    }
}