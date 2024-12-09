/*1)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    if (age < 0)
    {
        cerr << "Error: Age cannot be negative." << endl;
    }

    clog << "User entered name: " << name << " and age: " << age << endl;

    return 0;
}
*/
/*2)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Your full name is: " << fullName << endl;

    return 0;
}*/
