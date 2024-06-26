# include <iostream>
# include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(18);
    s.insert(9);
    s.insert(10);
    s.insert(28);
    s.insert(80);
    s.insert(74);
    s.insert(11);

    // Print the elements in sorted order
    for(auto i : s){
        cout << i << endl;
    }
    cout << endl;

    // Erase the first element
    s.erase(s.begin());

    // Print the elements after erasing the first element
    for(auto i : s){
        cout << i << endl;
    }
    cout << endl;

    // Check whether 18 is present or not
    cout << "Check whether 18 is present or not: " << s.count(18) << endl;

    // Find and print elements from the iterator pointing to 18 until the end
    set<int>::iterator itr = s.find(18);
    for(auto it = itr; it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
