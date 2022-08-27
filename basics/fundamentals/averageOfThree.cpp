#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, average;

    cout << "Enter the first real number" << endl;
    cin >> num1;
    cin.get();

    cout << "Now enter a second real number" << endl;
    cin >> num2;
    cin.get();

    cout << "Enter the third number" << endl;
    cin >> num3;
    cin.get();


    average = (num1 + num2 + num3) / 3;
    cout << "Average is " << average << endl;

    return 0;
}