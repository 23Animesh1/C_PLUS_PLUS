# include <iostream>
using namespace std;

bool isPresent(int arr[3][4],int target,int row,int column){
    for (int row = 0;row<3;row++){
        for (int column =0;column<4;column++){
            if (arr[row][column]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main( ){
    //create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // int arr[3][4] ;
    //loop for rows and second loop is for columns
    // for (int row = 0;row<3;row++){
    //     for (int column =0;column<4;column++){
    //         cin>>arr[row][column];
    //     }
    // }


    for (int row = 0;row<3;row++){
        for (int column =0;column<4;column++){
            cout<<arr[row][column]<<" ";
        }cout<<endl;
    }
    cout<<"enter the element to search "<<endl;
    int target;
    cin>>target;
    if (isPresent(arr,target,3,4)){
        cout<<"element found";
    }else{
        cout<<"not found";
    }
    return 0;
}