# include <iostream>
using namespace std ;
int search(int arr[],int n,int item){
    int index = 0;
    for (int i = 0;i<n;i++){
        int current = i;
        if (arr[i]== item){
            index = current+1;
        }
    }
    return index ;
}
int main (){
    int arr [6] = {1,2,34,56,7,7};
    int result = search(arr,6,1);
    cout << result;
}