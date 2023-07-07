#include<iostream>

int main()
{
    int N;
    std::cin >> N;

    float A[N];

    for (int i = 0 ; i<N ; ++i)
    {
        std::cin >> A[i];
    }

    float MAX = 0;

    for (int i = 0 ; i<N ; ++i)
    {
        if(A[i]>MAX)
        {
            MAX = A[i];
        }
    }

    double SUM = 0;

    for(int i=0; i < N ; ++i)
    {
        SUM += A[i];
    }
    std::cout << SUM*100/MAX/N;
}