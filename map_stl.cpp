# include <iostream>
#include <map>

//map works like key value pair 
//no same keys allowed but same values allowed
using namespace std;

int main(){
    map<int,string> n;
    n[1]="animesh";
    n[2]="dutta";
    n[13]="btech";

    n.insert({5,"bheem"});
    cout<<"befor erase"<<endl;
    for(auto i:n){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 ->"<<n.count(13)<<endl;
    n.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:n){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 ->"<<n.count(13)<<endl;
    n.erase(13);
}
