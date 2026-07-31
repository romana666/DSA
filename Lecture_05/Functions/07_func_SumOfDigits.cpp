/*
Sum of digits
*/

#include<iostream>
using namespace std;

int SumDigit(int num){
    int digSum = 0;

    while(num>0){
        int lastDig = num%10;
        num/=10;

        digSum += lastDig;
    }
        return digSum;
}

int main(){
      cout<<"Sum = "<< SumDigit(1025)<<endl;
   return 0;
}