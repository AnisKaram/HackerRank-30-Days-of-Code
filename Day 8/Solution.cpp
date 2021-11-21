#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n; // number of entries in map
    string query_name, user_name, user_number;

    std::cin >> n;

    // Map, Key: string, Value: integer
    std::map<std::string, string> phoneBook;

    for (int i = 0; i < n; i++)
    {
        std::cin >> user_name >> user_number;
        phoneBook[user_name] = user_number;
    }

    while (std::cin >> query_name)
    {
        if (phoneBook.find(query_name) != phoneBook.end())
        {
            std::cout << query_name << "=" << phoneBook.find(query_name)->second << std::endl;
        }

        else
        {
            std::cout << "Not found" << std::endl;
        }
    }


    return 0;
}
