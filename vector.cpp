#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;

    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"Element at front-> "<<v.front()<<endl;
    cout<<"Element at back-> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    cout<<"Size-> "<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    
    
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size-> "<<v.size()<<endl;
}