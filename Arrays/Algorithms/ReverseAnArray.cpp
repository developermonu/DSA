#include <iostream>
using namespace std;

int Reverse(int* arr , int size){
    for (int i = 0 ; i<size/2 ; i++){
        arr[i] = arr[i]+arr[size-i-1];
        arr[size-i-1] = arr[i]-arr[size-i-1];
        arr[i] = arr[i] - arr[size-i-1];
    }
    return 0;
}
int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,size);
    for (int i = 0; i < size ; i++){
        cout<<arr[i]<<'\n';
    }

}