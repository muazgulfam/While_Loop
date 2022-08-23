#include <iostream>

using namespace std;

int main()
{
//INCREMENT OPERATOR
    cout << "Enter a Positive Integer to start a countdown ";
    int num1{};
    cin >> num1;

    while(num1 >= 0){
        cout << num1 << endl;
        --num1;
    }
    cout << "Blastoff!" << endl;
cout << "\n*------------------------------*-------------------------------------------*" << endl;

//DECREMENT OPERATOR
    cout << "\nEnter a Positive Integer to start a count_up ";
    int num2{};
    cin >> num2;

    int i{};
    while (num2 >= i){
        cout << i << endl;
        i++;
    }
    cout << "Blastoff!";
    return 0;
}
