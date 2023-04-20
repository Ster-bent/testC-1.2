#include <iostream>
using namespace std;

string command;
string commands[]= {"/shutdown", "/source", "/roomai", "/calculate", "/wsites"};
string response[]= {};

int main(){
        cout << "Type /L to see a list of commands" << endl;
    while (true) {
        cin >> command;
        if (command == response[0]){
            break;
        }
        else if (command == "/L"){
            for (int x; x<=4; x++){
                cout << commands[x] << endl;
            }
        }
    }
    return 0;
}
