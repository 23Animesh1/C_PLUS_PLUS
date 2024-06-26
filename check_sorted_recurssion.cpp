# include <iostream>
using namespace std ;
bool isSorted(int *arr ,int size){
    if (size==0 || size == 1){
        return true;
    }
    else {
        if (arr[0]>arr[1]){
            return false;
        }
        else {
            bool remaining = isSorted(arr+1,size-1);
        }
    }
}

int main( ){
    int arr[] = {1,7,5,8,9};
    int size = 5;
    bool ans = isSorted(arr ,size);
    if (ans){
        cout<<"array is sorted ";
    }else{
        cout <<"not sorted";
    }
}