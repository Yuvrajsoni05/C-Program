#include <iostream>




using namespace std;

int factorial(int n){
    if(n<= 1){
        return 1;
    }
    return n * factorial(n-1);
}
int a;
int main(){
    cout << "enter number : ";
    cin >> a;
    cout << factorial(a);
}
