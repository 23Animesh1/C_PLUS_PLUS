#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    // cin >> name; 

    // Read the entire line
    getline(cin, name);

    cout << "Your name is: " << name << endl;
    //size of string 
    cout<<"size: "<<name.size()<<endl;
    //accesing element of the string 
    cout<<"the element present in the first index is "<<name.at(0)<<endl;

    //append function is used to add elements in the string 
    name.append(" Dutta");
    cout << "Your full name is: " << name << endl;

    //substring from the existing string;
    string r = name.substr(3,5);        //string.substr(start,no of places)
    cout<<"the substring of the name is"<<r;

    // replace function in string 
    // string& replace( first, last, str);
    
}
