#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // map<string,int> family;
    // map<string,int> Original;
    // family["Ahmed"]=false;
    // family["Ihab"] = 20;
    // cout<<family["Ahmed"]<<endl;
    // cout<<Original["Ihab"];

    map<string,string> Family;
    Family["a"]= "Nouh";
    string name = Family["a"];
    name[0] = 2;
    name[1] = 3;
    name[2] = 5;
    name [3] = 7;
}