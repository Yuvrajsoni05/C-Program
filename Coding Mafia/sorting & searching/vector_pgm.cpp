#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[10][10];
    // vector<int> arr;
    // arr.push_back(10); //add element to the end of the vector
    // arr.push_back(20);
    // int size = arr.size();
    // cout << arr[0] << endl;
    // cout << arr[1] << endl; 
    int n = 5;
    vector < vector<int> > arrs;
    int rows = arrs.size();
    for(int i = 0; i<arrs.size(); i++){
        int length = arrs[i].size();
        for(int j = 0; j < length; j++){
            cout << arrs[i][j] << " ";
        }
        cout << endl;
    }
}