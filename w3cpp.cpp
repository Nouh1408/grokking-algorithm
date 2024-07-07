#include<iostream>
#include<string>

using namespace std;

class MyClass {
    public:
    void myfun(){
        cout<<"Hello";
    }
};

int main(){
    // string food = "Pizza";
    // string& meal = food;
    // string* ptr = &food;
    // cout<<meal<<endl;
    // cout<<&food<<endl;
    // cout<<ptr;
    MyClass myObj;
    myObj.myfun();

}