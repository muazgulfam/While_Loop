#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Number between 1 and 10  ";
    int number{};
    cin >> number;

    while (number < 1 || number > 10) {
        cout << "Please enter a number between 1 and 10  ";
        cin >> number;
    }
    cout << "Thanks" << endl;
    return 0;
}
