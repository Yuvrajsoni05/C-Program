#include <iostream>
using namespace std;


void selection(int arr[] ,int n){
    for(int i = 0; i<n; i++)
    {
        int min_index = i;
        for(int j = i + 1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;

    }
}


void printarr(int arr[] ,int n){
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << endl;


    }
}

int main(){
    int arr[] = {1,32,53,4,45,6,73,8};
    int n = sizeof(arr) / sizeof(int);
    selection(arr ,n);
    printarr(arr,n);



    int c_min =  arr[0]; 
    for(int i = 0;  i < n; i++){
        if(arr[i] <  c_min){
            c_min = arr[i]; // update current minimum 
        }
    }
    return 0;

}


 // namespace s