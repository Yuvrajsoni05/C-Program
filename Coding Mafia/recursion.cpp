#include <iostream>


using namespace std;
void fun(int n){
    if (n  == 0){
        return;
    }
    cout << n << endl;
    fun(n-2);
}
int main(){
    int a = 10;
    fun(a);
}