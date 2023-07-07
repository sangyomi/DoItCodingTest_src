//
// Created by sangjun on 23. 5. 22.
//
#include <iostream>

int main ()
{
    int N;
    int array[1000];
    int tep;

    std::cin >> N;

    for(int i = 0 ; i < N ; i++)
    {
        std::cin >> array[i];
    }
    for (int i = 0 ; i < N-1 ; i++)
    {
        for (int j = 0 ; j < N-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                tep = array[j];
                array[j] = array[j+1];
                array[j+1] = tep;
            }
        }
    }
    
    for (int i = 0 ; i < N ; i++)
    {
        std::cout<< array[i] << std::endl;
    }        
}