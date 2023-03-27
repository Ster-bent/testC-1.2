#include <iostream>
using namespace std;

int main(){
    while (true){
        float x;
    string operation;
    float y;
    string cancel = "cancel";
    string add = "+";
    string sub = "-";
    string mult = "*";
    string div = "/";
    cout << "Please enter the operation\n";
    cin >> x;
    cin >> operation;
    cin >> y;
    if (operation == add){
        cout << x+y << endl;
    }
    if (operation == sub){
        cout << x-y << endl;
    }
    if (operation == mult){
        cout << x*y << endl;
    }
    if (operation == div){
        cout << x/y << endl;
    }
    //needs to be checked by main and by others
    if (operation == cancel){
        break;
    }
}
    }
    