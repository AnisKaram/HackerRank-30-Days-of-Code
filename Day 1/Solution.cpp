#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int int_number;
    double double_number;
    string str;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    std::cin >> int_number;
    std::cin >> double_number;
    cin.ignore();
    getline(cin, str);

    // Print the sum of both integer variables on a new line.
    std::cout << i + int_number << std::endl;

    // Print the sum of the double variables on a new line.
    std::cout << std::fixed << std::setprecision(1) << d + double_number << std::endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout << s + str << std::endl;

    return 0;