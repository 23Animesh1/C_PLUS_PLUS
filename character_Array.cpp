# include <iostream>
using namespace std;

int Getlength(char name[]){
    int count = 0;
    for (int i =0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int length){
    int s = 0;
    int e = length-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
bool checkpallindrome(char name[],int size){
    int s= 0;
    int e = size-1;
    while(s<=e){
        if (name[s]!=name[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    return 1;
    }
}
int main ( ){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout <<"Your name is "<<name<<endl;
    int size = Getlength(name);
    cout<<"the size of the name is "<<size<<endl;

    reverse(name,size);
    cout<<"The reversed array is "<< name<<endl;

    cout<<"The provided string is pallindrome or not (1/0)"<<checkpallindrome(name,size);
}