#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    // stoi(string) to convert from integer to string

    // trying to convert if converted we show the result
    // catch the error if not converted and show Bad String
    try {
        int conv_str = stoi(S);
        std::cout << conv_str;
    }
    catch (exception error) {
        std::cout << "Bad String";
    }

    return 0;
}