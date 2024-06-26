# include <iostream>
using namespace std;
int main( ){
    int num = 5;
    num++;
    cout<<num<<endl;

    int *p = &num; //pointers
    cout<<p<<endl; 
    
    cout<<"address of num is "<<&num;
}