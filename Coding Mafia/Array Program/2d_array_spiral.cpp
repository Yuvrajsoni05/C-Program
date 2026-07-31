#include <iostream>

using namespace std;

int  main(){

    cout << "spiral matrix" << endl;;
    int n = 5; 
    int matrix[101][101];
    int row = 0;
    int col = 0;
    int direction = 0;
    int counter = 1;
    while(counter <= n*n){
        matrix[row][col] == counter;
        if (direction == 0){
            
            if(col == n-1){
                direction = 1;
                row++;
            }
            else{
                col++;
            }
        }
        else if (direction == 1)
        {
            if (row == n-1 ){
                direction = 2;
                row++;
            }
            else{
                col++;
            }
            
        }
        else if (direction == 2)
        {
            if (col == 0){
                direction = 3;
                col--;
            }
            else{
                col--;
            }
            
        }
        else{
            row--;
        }
        
        
        // col++;
        cout << col << endl;
        cout << row << endl;
        // cout << counter << endl;
        counter++;
    }

    return 0;
}