/*
 Minimum of 2 value
*/


#include<iostream>
using namespace std;

int minOfTwo(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
    //func call /invoke
    cout<<"min = "<< minOfTwo(5,3)<<endl;      //arguments

    return 0 ;

}
