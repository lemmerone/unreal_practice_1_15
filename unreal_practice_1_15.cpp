#include <iostream>

void printNumber(int n)
{
    std::cout << n << " ";
}

void findOddNumbers(int limit, bool isOdd)
{
    for (int i = isOdd; i <= limit; i += 2)
    {
        printNumber(i);
    }
}

int main()
{
    const int n = 10;
    for (int i = 0; i <= n; i += 2)
    {
        printNumber(i);
    }

    std::cout << "\n";
    findOddNumbers(10, true);
    std::cout << "\n";
    findOddNumbers(10, false);
}
