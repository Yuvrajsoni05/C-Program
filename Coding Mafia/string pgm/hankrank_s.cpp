#include <iostream>
#include <string>


using namespace std;
int main() {
    string s = "Hello World";
    string a = "C++";
    s = s + a;
    cout  << s << endl;
    cout << "Update s : "<< s << endl;

    for(int i = 0; i < s.size(); i++){
        if (i == 0){
            s[i] = 't';

        }

    }
    cout << s << endl;
    return 0;
    
}