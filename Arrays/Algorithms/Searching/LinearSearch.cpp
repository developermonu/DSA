#include <iostream>
using namespace std;
int LinearSearch(int* arr , int size , int key){
    for (int i = 0 ; i< size ; i++){
        if (arr[i] == key ){
            return i;
        }
    else{
        return -1;
    }
    }
    return 0
}
int main(){
    int arr[5] = {43,42,12,534,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the Number to be searched : ";
    cin>>key;
    int index = LinearSearch(arr,size,key);
    if ( index != -1){
        cout<<"Element Found at index "<<index;
    }
    else{
        cout<<"Not Found";
    }

}