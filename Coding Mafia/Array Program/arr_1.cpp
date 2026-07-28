#include <iostream>

using namespace std;
int main ()

{
    cout << "yuvrajs soni" << endl;
    cout << "Array is Collection of value \n";
    
    
    int arr[] = {1,2,3,4,5,6,7};
    cout << arr << endl;
    cout << *(arr + 2) << endl; // address of array index value 

    for (int i=0; i < 9; i++) {
        cout << arr[i] << endl;
    }

    for (int i=0; i < 9; i++) {
        cout << arr[i] + 100 << endl;
    }

    // int sum = 0;
    // for (int i=0; i < 9; i++) {
    //
    //     cin >> arr[i];
    //     sum += arr[i];
    //
    // }
    // cout << sum << endl;
    

     //multi-d=dimation array
    int score[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout << score[1][2]  << endl;
    char matrix[3][3];
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cin >> matrix[i][j];


        }

    }
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cout<< matrix[i][j];
        }
        cout << endl;
    }
    return 0;

} 
