#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    int T;
    std::cin >> N >> T;

    int S[100001] = {};

    for(int i = 1 ; i <= N ; i++)
    {
        int toss;
        std::cin >> toss;
        S[i] = S[i-1] + toss;
    }


    for(int i = 0 ; i < T ; i++)
    {
        int start, end;

        std::cin >> start  >> end;

        std::cout << S[end]-S[start-1] << "\n"; 
    }
}