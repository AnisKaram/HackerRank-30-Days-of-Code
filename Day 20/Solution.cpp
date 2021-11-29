#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    // Write your code here
    
    // Track number of swaps we made
    int numberOfSwaps = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int w = 0; w < a.size() - 1; w++)
        {
            if (a[w] > a[w + 1])
            {
                int temp = a[w];
                a[w] = a[w + 1];
                a[w + 1] = temp;
                
                numberOfSwaps++;
            }
        }
    }
    
    // Cout -> Array is sorted in numSwaps swaps.
    std::cout << "Array is sorted in " << numberOfSwaps << " swaps." << std::endl;
    // Cout -> First element of the sorted array
    std::cout << "First Element: " << a[0] << std::endl;
    // Cout -> Last element of the sorted array
    std::cout << "Last Element: " << a[n - 1] << std::endl;    
    
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
