/*
    Function invoke
*/ 

#include<iostream>
using namespace std;

//function definition
int printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){
    //func call /invoke
    cout<<printHello()<<endl;

    return 0 ;

}