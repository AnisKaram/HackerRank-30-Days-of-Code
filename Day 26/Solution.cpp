#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fineCalculations(int ret_Day, int ret_Month, int ret_Year, int due_Day, int due_Month, int due_Year)
{
    int ret = ret_Day + (ret_Month * 100) + (ret_Year * 10000);
    int due = due_Day + (due_Month * 100) + (due_Year * 10000);

    if (ret < due) // Condition 1
        return 0;

    if (ret_Year > due_Year) // Condition 4
        return 10000;
    else if (ret_Month > due_Month) // Condition 3
        return (ret_Month - due_Month) * 500;
    else if (ret_Day > due_Day) // Condition 2
        return (ret_Day - due_Day) * 15;

    return 0;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int ret_Day, ret_Month, ret_Year; // Date book was actually returned
    int due_Day, due_Month, due_Year; // Date expected to be returned (due date)

    std::cin >> ret_Day >> ret_Month >> ret_Year;
    std::cin >> due_Day >> due_Month >> due_Year;

    int fine = fineCalculations(ret_Day, ret_Month, ret_Year,
        due_Day, due_Month, due_Year);

    cout << fine;

    return 0;
}

