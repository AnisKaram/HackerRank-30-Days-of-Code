#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T;

    std::cin >> T;

    // T is used for number of strings
    while (T < 1 || T > 10)
    {
        std::cout << "Enter T: ";
        std::cin >> T;
    }

    string S[T];

    // Input from the user
    for (int i = 0; i < T; i++)
    {
        std::cin >> S[i];
    }

    for (int i = 0; i < T; ++i)
    {
        string even = "";
        string odd = "";

        for (int j = 0; j < S[i].length(); ++j)
        {
            //std::cout << "S[" << i << "],[" << j << "] : " << S[i][j] << std::endl;
            //std::cout << S[i][j];
            if (j % 2 == 0)
                even += S[i][j];

            else
                odd += S[i][j];
        }

        std::cout << even << " " << odd << std::endl;

    }

    std::cout << std::endl;

    // for (int i = 0; i < T; i++)
    // {
    //     std::cout << "S [" << i << "] : " << S[i] << std::endl;
    // }
    return 0;
}
