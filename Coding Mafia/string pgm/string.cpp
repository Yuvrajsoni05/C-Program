#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = "Hello world" ;
    char str2[] = {
          'c' , 'd' , 'o', '2' ,'3' ,  '\0' ,  //'\0'  everything after '\0' is ignored by string functions
          'd', 'd', 'd',
    };
    cout << str << endl;
    cout << str2 << endl;
    char temp[100];
     strcpy(temp, str);
     cout << temp << endl;
     cout << strlen(temp) << endl;
     strcat(temp, str2);
     cout << temp << endl;
     cout << strlen(temp) << endl;
     if (strcmp(temp, str) != 0) {
          cout << "not equal" << endl;
     }
    return 0;
}
