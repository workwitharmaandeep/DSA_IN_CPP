#include<iostream>
#include<vector>
using namespace std;
int main(){
    //this code explain the vector constructro and the concept of size and ca[acity and doubling of the capcity.
    vector<int> test;
    test.push_back(30);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    test.push_back(50);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    test.push_back(70);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    test.push_back(90);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    test.push_back(110);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    test.push_back(130);
    cout<<"size is "<< test.size()<<"capacity is "<<test.capacity()<<endl;
    
}