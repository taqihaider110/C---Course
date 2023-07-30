#include <iostream>
using namespace std;
int main()
{
    double numerator, denominator, answer;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try
    {
        // throw an exception if denominator is 0
        if (denominator == 0)
            throw denominator;
        // not executed if denominator is 0
        answer = numerator / denominator;
        cout << numerator << "/" << denominator << "=" << answer << endl;
    }
    catch (int num)
    {
        cout << "Error: Cannot divide by" << num << endl;
    }
    return 0;
}
