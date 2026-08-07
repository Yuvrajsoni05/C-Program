#include <iostream>
#include <vector>

using namespace std;
void sumofvector(const vector<int>& v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        sum += v[i];
    }
    cout << "Sum: " << sum << endl;

}

void minimumel(const vector<int> & v){
    int mini = v[0];
    for(int i = 0; i < v.size(); i++){
        if(v[i] < mini){
            mini = v[i];
        }
    }
    cout << "Minimum element: " << mini << endl;
}


int main(){

    vector<int> v {1, 2, 3, 4, 5};
    sumofvector(v);
    minimumel(v);
    return 0;
}