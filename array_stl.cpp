# include <iostream>
# include <array>
using namespace std;
int main(){
    int basic[3]= {1,23,22};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for (int i = 0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 3 index is "<<a.at(3)<<endl;
    cout<<"check whether the array is empty "<<a.empty();
    cout<<"front element in this array is "<<a.front()<<endl;
    cout<<"last element in this array is "<<a.back()<<endl;
}