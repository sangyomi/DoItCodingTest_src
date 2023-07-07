#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N;
    std::string str;

    std::cin >> N;

    std::cin >> str;

    int sum=0;

    for (int i = 0 ; i < N ; i++)
    {
        sum += str[i]-'0';
    }
    std::cout << sum << std::endl;    

}