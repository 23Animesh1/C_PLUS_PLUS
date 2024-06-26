# include <iostream>
# include <stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("Animesh");
    s.push("Dutta");
    s.push("BTECH");
    cout <<" Top element "<<s.top()<<endl;
    s.pop();
    cout <<" Top element "<<s.top()<<endl;
    cout<<s.size()<<endl;

    cout<<s.empty();
}