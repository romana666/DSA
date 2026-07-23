
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool isPrime = true; 

    if(n <= 1){
        isPrime = false;
    }

    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            isPrime = false;
            break; 
        }
    }

    if(isPrime){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }

    return 0;
}