#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullName, location;
    int initialScore;

    cout << "Enter the initial score" << endl;
    cin >> initialScore;
    cin.get();
    
    cout << "Please enter your full name" << endl;
    getline(cin, fullName);

    cout << "Where are you from? (city/ province/ country)" << endl;
    getline(cin, location);

    

    cout << "Hello, " << fullName << endl;
    cout << "We've heard you are from " << location << endl;
    cout << "Your initial score is " << initialScore;
    cout << ", but with 5 points added it's " << initialScore + 5 << endl;

    return 0;
}