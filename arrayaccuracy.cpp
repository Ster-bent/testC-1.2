#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter a number\n";
    cin >> x;
    int arr1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int arr2[] = {2, 2, 2, 2, 2, 2};
    int arr3[] = {3, 3, 3, 3, 3, 3, 3};
    int arr4[] = {4, 4, 4, 4, 4, 4, 4, 5};
    int arr5[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    if (arr1[x] == true){
        cout << "The numbers are accuracy percentage\n";
        cout << (1/5)*100 << endl;
        if (arr2[x] == true){
            cout << (2/5)*100 << endl;
            if (arr3[x] == true){
                cout << (3/5)*100 << endl;
                if (arr4[x] == true){
                    cout << (4/5)*100 << endl;
                    if (arr5[x] == true){
                        cout << (5/5)*100 << endl;
                    }
                }
            }
        }
    }
    else {
        cout << "Error";
    }
    return 0;
}