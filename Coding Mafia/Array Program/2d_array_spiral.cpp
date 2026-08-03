#include <iostream>
using namespace std;




int main(){

    int n = 5;
    int matrix[101][101];

    
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int ma = 1;


while(top <= bottom and left <= right){
    for (int i =left; i < right+1; i++){
        matrix[top][i] = ma;
        ma++;
    }
    top = top + 1;

    for (int i = top; i < bottom+1; i++){
        matrix[i][right] = ma;
        ma++;
    }
    right = right - 1;

    if (top <= bottom){
        for (int i = right; i >= left; i--){
            matrix[bottom][i] = ma;
            ma++;
        }
    }
    bottom = bottom - 1;



    if (left <= right){
        for (int i = bottom; i >= top; i--){
            matrix[i][left] = ma;
            ma++;
        }
    }
    left = left + 1;
    
    




}




    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << matrix[i][j] << " ";
    }
    cout << endl;
        
    }
    return 0;

}