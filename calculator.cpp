# include <iostream>
using namespace std ;
int main(){
    bool isOK = true;
    while (isOK == true){
    cout <<"Welcome to the calculator "<< endl;
    cout <<"Make the choice 1.add 2.subtraction 3. multiplication 4.divide 5.remainder";;
    int choice ;
    cin>>choice ;
    cout <<"Enter first number :"<<endl;
    int a,b ;
    cin>> a;
    cout <<"Enter second number :"<< endl;
    cin>>b;
    int result ;
    switch (choice){
        case 1 : result = a+b;
        cout <<"Addition of two number is : "<<result<<endl;
        break;
        case 2 : if (a>b){
            result = a-b;
        }
        else {
            result = b-a;
        }
        cout <<"subtraction of two number is : "<<result<<endl;
        break;
        case 3 : result = a*b;
        cout <<"multiplication of two number is :"<<result<<endl;
        break;
        case 4 : result = a/b;
        cout <<"dividend of this number is " << result<<endl;
        break;
        case 5 : result = a%b;
        cout <<"remainder of this "<<result<<endl;
        break;
        default :
        cout << "invalid input ";
    }
    cout <<"do u want to use again : Y/N"<< endl;
    char ch ;
    cin>>ch;
    if (ch == 'y'|| ch == 'Y'){
        isOK = true;
    }
    else {
        isOK = false;
        cout <<"thank you";
    }
    }
}