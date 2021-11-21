#include <bits/stdc++.h>
#include<vector>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int n_remainder;

    int count_binary = 0;
    int count_binary_temp = 1;


    std::vector<int> remainderVector_temp;
    std::vector<int> remainderVector;

    // Getting the base 2 integer, pushing into a vector array
    while (n > 0)
    {
        n_remainder = n % 2;
        n = n / 2;
        remainderVector_temp.push_back(n_remainder);
    }

    // Rearranging the vector array, from front to back
    for (int i = remainderVector_temp.size() - 1; i >= 0; i--)
    {
        remainderVector.push_back(remainderVector_temp[i]);
    }


    for (int w = 0; w < remainderVector.size(); w++)
    {

        if (remainderVector[w] == 1)
        {
            count_binary++;
        }
        else if (remainderVector[w] == 0)
        {
            if (count_binary == 0)
                break;
            count_binary_temp = count_binary;
            count_binary = 0;
        }
    }

    // int count = 0;

    if (count_binary >= count_binary_temp)
        std::cout << count_binary;
    else if (count_binary <= count_binary_temp)
        std::cout << count_binary_temp;
    else
        std::cout << 0;

    // std::cout << count_binary;

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
