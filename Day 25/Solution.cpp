#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkIfPrime(int n)
{
    if (n == 1)
        return false; // not prime

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false; // not prime
    }
    return true; // prime
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;

    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        std::cin >> n;

        if (checkIfPrime(n))
            std::cout << "Prime" << std::endl;
        else
            std::cout << "Not prime" << std::endl;
    }

    return 0;
}
