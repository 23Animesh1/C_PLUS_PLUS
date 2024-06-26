# include <iostream>
# include <queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Hello");
    q.push("bhai");
    q.push("kaisa hai");

    cout <<"size befor pop"<<q.size()<<endl;
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element"<<q.front()<<endl;

    cout<<"Size after pop"<<q.size()<<endl;
}