#include<iostream>
#include<map>

using namespace std;

int main (){

map<int,string> m;

m[1]= "syed";
m[12]= "amaan";
m[3]= "uddin";

m.insert({5,"bheem"});

cout<<"before erase : "<<endl;
for(auto i: m){
    cout<<i.first<<i.second<<endl;;
}cout<<endl;

cout<<"finding 12 : "<<m.count(12)<<endl;
cout<<"finding -12 : "<<m.count(-12)<<endl;
m.erase(12);
cout<<"after erase: "<<endl;

for(auto i: m){
    cout<<i.first<<i.second<<endl;
}cout<<endl;

auto it = m.find(5);
for(auto i = it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}

}


