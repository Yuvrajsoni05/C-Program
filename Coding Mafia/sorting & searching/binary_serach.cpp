#include <iostream>


 

int binary(int arr[], int m, int t){
    // lower limit what is lowest limit 
    // highest index 
    // central index
    
    int l = 0;
    int h = m-1;
    while (l <= h)
    {
        int middle = (l + h)/2;
        if(arr[middle] == t){
            return middle;
        }else if(arr[middle] > t){
            h = middle - 1;
        }
        else{
            l  = middle + 1;

        }

    }
    return -1; 
}


    // for(int i=0; i<m; i++){
    //     if(arr[i] == t){
    //         return i;
    //     }
    // }
    // return -1;

using namespace std;
int main (){

    // binary search
    int arr[] = {1,2,22,41,53,63,73};
    int m = sizeof(arr)/sizeof(int);
    cout <<binary(arr,m,41) << endl;



    // cout << a << endl;

    return 0;
}


    


