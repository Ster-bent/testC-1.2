#include <iostream>
using namespace std;

string command;
string commands[]= {"/shutdown", "/source", "/roomai", "/calculate", "/wsites"};
string response[]= {};

int source(){
    cout << "Made by Ster-bent!" << endl;
    return 0
}

int calculator(){
    while (true){
        float x;
        string z;
        float y;
        cout << "please enter your equation (enter after every character)"<< endl;
        cin >> x;
        cin >> z;
        cin >> y;
        if (z == "+"){
            cout << x+y << endl;
        }
        else if (z == "-"){
            cout << x-y << endl;
        }
        else if (z == "/"){
            cout << x/y << endl;
        }
        else if (z == "*"){
            cout << x*y << endl;
        }
        else if (z == "%"){
            float percent = (x/100)*y;
            cout << percent << endl;
        }
        else if (z == "/stop"){
            break;
        }
        else if (z == "^"){
            //temp operand
            cout << x*x << endl;
        }
        else {
            cout << "invalid operation" << endl;
        }
    }
    return 0;
}

int main(){
        cout << "Type /L to see a list of commands" << endl;
    while (true) {
        cin >> command;
        if (command == commands[0]){
            break;
        }
        else if (command == "/L"){
            for (int x; x<=4; x++){
                cout << commands[x] << endl;
            }
        }
        else if (command == "/calculate"){
            calculator();
        }
    }
    return 0;
}
