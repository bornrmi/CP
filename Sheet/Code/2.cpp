#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int s) {

    struct Pair minmax;
    int i;
    
    //for s=1 
    if(s == 1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }


    //for more than 1 elements
    if(arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }

    else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    //comparing rest elements
    for(i=2; i<s; i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main() {
    int arr[] = {100,45,67,34,23,89,2,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size;
    struct Pair minmax = getMinMax(arr, size);
    
    // min value
    cout<<"Min value "<<minmax.min<<endl;
    cout<<"Max value "<<minmax.max<<endl;
    
    return 0;
}