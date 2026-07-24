// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cin >> n ;

//     int i=1;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout << sum <<endl;
//     return 0;
// }


//same in for loop

#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){
        sum+=i;
        if(i == 5){
            break;
        }
    }

    cout << sum << endl;

    return 0;
}