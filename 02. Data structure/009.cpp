#include <iostream>
#include <string>

using namespace std;

int D[4] = {0,};

void add(char a)
{
        if(a == 'A')
        {
            D[0]++;
        }
        else if(a == 'C')
        {
            D[1]++;
        }
        else if(a == 'G')
        {
            D[2]++;
        }
        else if(a == 'T')
        {
            D[3]++;
        }
}

void remove(char a)
{
        if(a == 'A')
    {
        D[0]--;
    }
    else if(a == 'C')
    {
        D[1]--;
    }
    else if(a == 'G')
    {
        D[2]--;
    }
    else if(a == 'T')
    {
        D[3]--;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, P;
    string G;
    int A[4] = {0,};
    int count = 0;

    cin >> S >> P;
    cin >> G;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> A[i];
    }

    for(int i = 0 ; i < P ; i++)
    {
        add(G[i]);
    }

    if(A[0] <= D[0] && A[1] <= D[1] && A[2] <= D[2] && A[3] <= D[3])
    {
        count++;
    }

    for(int i = 0; i < S-P ; i++)
    {   
        remove(G[i]);
        add(G[i+P]);
        if(A[0] <= D[0] && A[1] <= D[1] && A[2] <= D[2] && A[3] <= D[3])
        {
            count++;
        }
    }
    cout << count;
}