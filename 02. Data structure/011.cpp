#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; 
    cin >> N;

    vector<int> Arr_Num;
    vector<char> Arr_Char;

    for(int i = 0 ; i < N ; i++)
    {
        int T;
        cin >> T;
        Arr_Num.push_back(T);
    }

    stack<int> A;

    int count = 1;
    int idx = 0;
    bool TF = true;

    for(int i = 0; i < N ; i++)
    {
        while(Arr_Num[idx] >= count)
        {
        A.push(count);
        Arr_Char.push_back('+');
        count++;
        }

        int T = A.pop();
        
        if (Arr_Num[idx] != T)
        {
            TF = false;
        }

        Arr_Char.push_back('-');
        idx++;
    }
    
    if(TF)
    {
        cout << "NO";
    }
    else
    {
        for(char a : Arr_Char)
        {
            cout << a << " ";
        }
    }

}