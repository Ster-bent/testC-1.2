#include <iostream>
using namespace std;

int main()
{
    //user input is shown as 'cin'
    int a,b;
    cout << "enter the first number \n";
    cin >> a;
    cout << "please enter your second number \n";
    cin >> b;
    int sum = a + b;
    cout << "the sum is:" << sum << endl;
    // cout is like print in other programming languages
    cout << "egg";
    //auto before a variable will make the variable detect whether or not it is a interger string, or float.
    auto d = 4.76;
    return 0;
}

