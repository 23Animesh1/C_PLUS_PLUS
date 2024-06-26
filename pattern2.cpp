# include <iostream>
using namespace std;
int main(){

    int rows =1,n ;
    cin>>n;
    while (rows <=n){
        int columns = 1;
        while (columns <= rows){
            cout << "*";
            columns = columns+1;
        }
        cout <<endl;
        rows = rows +1;
    }
    
}