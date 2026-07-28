#include <iostream>
using namespace std;
int sum(int a, int b)

{
    return a + b;
}
bool isPrime(int n){
    if (n<2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }

    }
    return true;
}
void pyrmid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int ans = sum(5,7);
    cout << ans;

    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }

    int n;
    cout << "Enter a number: ";
    cin >> n;
    pyrmid(n);
    
    return 0;
    
}