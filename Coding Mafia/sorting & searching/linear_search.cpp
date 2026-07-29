#include <iostream>



int linear(int a[],int n,int target){
    for (int i=0; i<n; i++){
        if(a[i] == target){
            return i;
        }
    }
    return -1;
}
// linear search is going index wise 
using namespace std;
int main (){

    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    cout << "This is Size of int  : "<< sizeof(int) << endl;
    cout << "This is Size of a Value : "<< sizeof(a) << endl;
    cout << "This is n Value : "<< n << endl;
    cout <<linear(a,n,4);


    // cout << a << endl;

    return 0;
}


    


