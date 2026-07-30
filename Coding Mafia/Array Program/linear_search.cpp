#include <iostream>
using namespace std;



bool linearSearch(int max[][3], int rows, int cols, int key){
    for(int i = 0; i< rows; i++){
        for(int j = 0; j< cols; j++){
            if(max[i][j] == key){
                cout << max[i][j] << endl;
                return true;  
                
            }
        }
    }
    return false;

}

int max_value(int maxs[][3] , int row,int cols){
    int maxRowSum = 0;
    for(int i = 0; i< row; i++){
        int rowSum = 0;
        for(int j = 0; j<cols; j++){
            rowSum += maxs[i][j];


        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;


}


int main (){
    int matrix[4][3] = {{1,2,13} , {4,5,6} , {7,8,9} , {101,111,12}};
    int row = 4;
    int col = 3;



   
    cout << max_value(matrix, row, col);
    

}