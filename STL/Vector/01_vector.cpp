#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(2);
    v.push_back(2);
    v.push_back(9);


    cout<<v[2]<<endl;
    cout<<v.at(1)<<endl; 
    //cout<<v.at(8)<<endl;       // by using at it tell that it is out of range
    


    //size() of vector
    cout<<"size : "<<v.size()<<endl;





    //vector size with loop
    for(int i = 0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;



    //1st value with front() 
    cout<<"front value : "<<v.front()<<endl;



    //last value with back()
    cout<<"back value: "<<v.back()<<endl;

    

    //remove vector
    //v.clear();
    //cout<<v.size()<<endl;       //checking it cleared or not


    //test the vector is it blank
    if(v.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }


    //delete the last value
    v.pop_back();

     for(int i = 0; i<v.size();i++){

        cout<<v[i]<<" ";

    }
    cout<<endl;

    //

    return 0 ;
}