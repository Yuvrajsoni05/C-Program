#include  <iostream>

using namespace std;

int a = 10;
void showHelloWork() {
    cout << "Hello World Program" << endl;
    int a = 210;
    cout << "LOCAL Variable Program "<< a << endl;

}


int main() {
    cout << "This Variable Program" << endl;

    bool source = true;
    bool found = false;
    char nameFirstLetter = 'A';
    float f1_value = 2.3;
    double d1_value = 2.33;

    cout << "This Variable Program" << endl;
    cout <<"This is Char Var " << nameFirstLetter << endl;
    cout << "This is Bool Var " << source << endl;
    cout << "This is Float Var " << f1_value << endl;
    cout << "This is Double Var " << d1_value << endl;

    showHelloWork();

    cout <<"Global Variable Program "<< a << endl;



    const int SECONDS = 3600 ;
    cout << "This Const We can't Change Value only Read "<< SECONDS << endl;

    
    cout << "long long int size: " << sizeof(long long int) << endl;



    return  0;

}