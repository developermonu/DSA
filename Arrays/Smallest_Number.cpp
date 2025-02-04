#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,4,3,454,34};
    int largest = arr[0];yy.
    for (int i = 1 ; i<5 ; i++)
    {
        if (arr[i]> largest){
            largest = arr[i];
        }
    }
    cout<<"largest Number is :" <<largest;
}