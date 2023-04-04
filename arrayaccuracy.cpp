#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter a number\n";
    cin >> x;
    //add float operations for actual percents
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {0, 1, 2, 3, 4, 5};
    int arr3[] = {0, 1, 2, 3, 4, 5, 6};
    int arr4[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int arr5[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (x == arr1[x]){
        cout << "The numbers are accuracy percentage\n";
        cout << (1/5)*100 << endl;
        if (x == arr2[x]){
            cout << (2/5)*100 << endl;
            if (x == arr3[x]){
                cout << (3/5)*100 << endl;
                if (x == arr4[x]){
                    cout << (4/5)*100 << endl;
                    if (x == arr5[x]){
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