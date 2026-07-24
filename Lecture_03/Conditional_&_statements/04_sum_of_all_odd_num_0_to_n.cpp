// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum = 0;
//     cin >> n ;
//     for(int i = 1; i <= n ; i+=2){     //if question asked  even then initialize will be  i = 2
//         sum += i;

//     }
//     cout << sum << endl;
//     return 0;
// }



//--------same solve by  loop and condition


#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
            sum+=i;
        }
    }
    
    cout << sum << endl;

    return 0 ;
}

