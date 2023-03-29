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
        cout << "has value";
    }
    else {
        cout << "has no value";
    }
}