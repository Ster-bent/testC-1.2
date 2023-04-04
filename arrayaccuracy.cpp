#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter a number\n";
    cin >> x;
    //add float operations for actual percents
    float a = (1.0/5.0)*100;
    float b = (2.0/5.0)*100;
    float c = (3.0/5.0)*100;
    float d = (4.0/5.0)*100;
    float e = (5.0/5.0)*100;
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {0, 1, 2, 3, 4, 5};
    int arr3[] = {0, 1, 2, 3, 4, 5, 6};
    int arr4[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int arr5[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (x == arr1[x]){
        cout << "The numbers are accuracy percentage\n";
        cout << a<<"%"<< endl;
        if (x == arr2[x]){
            cout << b<<"%"  << endl;
            if (x == arr3[x]){
                cout << c<<"%" << endl;
                if (x == arr4[x]){
                    cout << d<<"%" << endl;
                    if (x == arr5[x]){
                        cout << e<<"%" << endl;
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