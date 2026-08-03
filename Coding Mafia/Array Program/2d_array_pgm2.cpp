#include <iostream>
using namespace std;

int main(){
    int matrix[4][4] = {
        {2,4,6,8},
        {5,8,11,13},
        {7,14,17,18},
        {9,15,20,30}
    };
    int n = 4;
    bool found = false;
    int target = 8;
    int row  = 0, col = n - 1 ;

    while(col >= 0 && row <= n-1){
        if(matrix[row][col] == target){
            found = true;
            break;
        }
        else if(target < matrix[row][col]){
            col--;
        }
        else{
            row++;
        }
        
    }
    cout <<(found ? "found":"not found");
    return 0;
}


