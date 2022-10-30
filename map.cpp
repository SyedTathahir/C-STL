#include<iostream>
#include<map>

using namespace std;

int main (){

map<int,string> m;

m[1]= "syed";
m[12]= "amaan";
m[3]= "uddin";

for(auto i: m){
    cout<<i.first<<endl;
}

}

