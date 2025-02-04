#include <iostream>
using namespace std;
int multiply(int* arr , int size , int multiplier){
    for (int i = 0 ; i < size ; i++){
        arr[i] = arr[i]*multiplier;
    }
    return 0;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    multiply(arr,size , 19);
    for (int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<'\n';
    }
}