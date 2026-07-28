#include<iostream>
using namespace std;
int main() {
    cout << "Yuvraj Soni " << endl;

    // int a ,b ;
    //
    // cout << "Enter first value: ";
    // cin >> a;
    // cout << "Enter second value: ";
    // cin >> b;
    // cout << "You entered: " << a << " " << b << endl;


    int counter = 0; // start with
    int sum = 0;

    // while loop
    while (counter <= 10) // this is condition
    {
        sum = sum + counter;
        cout << "Yuvraj - " << counter << endl;
    counter = counter + 1;

    }
    cout << sum << endl;


    // for loop (intialization; condition;  increment decrement)
    for (int counter = 1; counter <= 10; counter++) {
        cout << "Yuvraj - " << counter << endl;
    }

    int  n;
    int total = 0;
    for (int a = 0; a < 10; a++) {
        cout << "enter number - ";
        cin >> n;  
        total = total + n;
    }
    cout << total << endl;
    return 0;


}