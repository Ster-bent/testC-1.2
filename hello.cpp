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
    cout << "egg\n";
    //auto before a variable will make the variable detect whether or not it is a interger string, or float.
    auto d = 4.86;
    //if statment example
    if (d == 4.76) {
        cout << "goodboy\n";
    }
    else{
        cout << "badboy\n";
    }
    //while loop
    int u = 0;
    while (u < 5) {
        cout << u;
        //u++ is the same as the code below
        u = u + 1;
    }
    return 0;
}

