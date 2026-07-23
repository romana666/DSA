
#include<iostream>
using namespace std;

int main(){
    int n, fact = 1;  // fact = 1 deya hoyeche jeno thik bhabe multiply hoy
    cin >> n;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}