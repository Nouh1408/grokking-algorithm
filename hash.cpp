#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,bool> family;
    map<string,int> Original;
    family["Ahmed"]=true;
    family["Ihab"] = 50;
    cout<<family["Ahmed"]<<endl;
    cout<<family["Ihab"];
}
