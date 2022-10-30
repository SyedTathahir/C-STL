#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main (){

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(6);
v.push_back(7);

cout<<"finding 5: "<<binary_search(v.begin(),v.end(),5)<<endl;
cout<<"finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;

cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

int a = 3;
int b = 5;

cout<<"max: "<<max(a,b)<<endl;
cout<<"min: "<<min(a,b)<<endl;

swap(a,b);

cout<<"a : "<<a<<endl;
cout<<"b : "<<b<<endl;

string abcd = "abcd";

reverse(abcd.begin(),abcd.end());
cout<<"string : "<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate : "<<endl;
for(int i: v){
    cout<<i<<" ";
}cout<<endl;

sort(v.begin(),v.end());
cout<<"after sorting: "<<endl;
for(int i :v){
    cout<<i<<" ";
}cout<<endl;

}