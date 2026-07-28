#include <iostream>

using namespace std;

int main() {


    int a = 10;
    int b = 200;

    cout <<"This is value of a " << a << endl;
    cout <<"This is value of b " << b << endl;

    cout <<"Addition  " << (a+b) << endl;
    cout <<"Subtraction  " << (a-b) << endl;
    cout <<"Multiplication  " << (a*b) << endl;
    cout <<"Division  " << (a/b) << endl;
    cout <<"Modulus  " << (a%b) << endl;
    cout <<"Negation  " << (-a) << endl;
    cout <<"increment " << (a++) << endl;
    cout <<"decrement " << (a--) << endl;
    cout <<"increment " << (++a) << endl;
    cout <<"decrement " << (--a) << endl;


    //step 2
    // Logical Operator

    bool value = (a == 10);
    cout <<"value of a " << value << endl;
    bool value1 = (a != 10);
    cout <<"value of a " << value1 << endl;
    bool value2 = (a <= 10);
    cout <<"value of a " << value2 << endl;
    bool value3 = (a >= 10);
    cout <<"value of a " << value3 << endl;


}