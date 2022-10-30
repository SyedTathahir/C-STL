#include<iostream>
#include<queue>
using namespace std;

int main (){

    queue<string> q;

    q.push ("syed");
    q.push ("amaan");
    
    cout<<"first element "<<q.front()<<endl;
    cout<<"size before  pop "<<q.size()<<endl;

    q.pop();
    cout<<"first element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;

}