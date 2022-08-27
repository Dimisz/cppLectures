#include <iostream>
using namespace std;

int main()
{
    int myInt;
    myInt = 18;

    double myDouble = 3.1415;

    cout << myInt << endl;
    cout << myDouble << endl;

    char singleChar = 'a';
    cout << singleChar << endl;

    string myName = "John";
    cout << "Hello " << myName << 2 + 3 << endl;

    bool isRaining = true;
    cout << "Boolean: " << isRaining << endl;
    cout << "Boolean with boolalpha: " << boolalpha << isRaining << endl;

    return 0;
}